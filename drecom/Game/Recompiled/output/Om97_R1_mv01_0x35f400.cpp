#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Om97_R1_mv01
// Address: 0x35f400 - 0x35f794
void Om97_R1_mv01_0x35f400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R1_mv01_0x35f400");
#endif

    switch (ctx->pc) {
        case 0x35f478u: goto label_35f478;
        case 0x35f49cu: goto label_35f49c;
        case 0x35f758u: goto label_35f758;
        case 0x35f77cu: goto label_35f77c;
        default: break;
    }

    ctx->pc = 0x35f400u;

    // 0x35f400: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35f400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35f404: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35f404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35f408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f410: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35f410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35f414: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35f414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35f418: 0x2442ab10  addiu       $v0, $v0, -0x54F0
    ctx->pc = 0x35f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945552));
    // 0x35f41c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35f420: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35f420u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AAB10u));
    // 0x35f424: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35f424u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35f428: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f42c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x35f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35f430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35f430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35f434: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x35f434u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35f438: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f43c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x35f43cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x35f440: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35f440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f448: 0x10620056  beq         $v1, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x35F448u;
    {
        const bool branch_taken_0x35f448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f448) {
            ctx->pc = 0x35F5A4u;
            goto label_35f5a4;
        }
    }
    ctx->pc = 0x35F450u;
    // 0x35f450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f454: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x35F454u;
    {
        const bool branch_taken_0x35f454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f454) {
            ctx->pc = 0x35F4C0u;
            goto label_35f4c0;
        }
    }
    ctx->pc = 0x35F45Cu;
    // 0x35f45c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F45Cu;
    {
        const bool branch_taken_0x35f45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f45c) {
            ctx->pc = 0x35F46Cu;
            goto label_35f46c;
        }
    }
    ctx->pc = 0x35F464u;
    // 0x35f464: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x35F464u;
    {
        const bool branch_taken_0x35f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f464) {
            ctx->pc = 0x35F674u;
            goto label_35f674;
        }
    }
    ctx->pc = 0x35F46Cu;
label_35f46c:
    // 0x35f46c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f46cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f470: 0xc0d7ca4  jal         func_35F290
    ctx->pc = 0x35F470u;
    SET_GPR_U32(ctx, 31, 0x35F478u);
    ctx->pc = 0x35F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F290u, 0x35F470u, 0x35F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F478u;
label_35f478:
    // 0x35f478: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x35f478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x35f47c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x35f47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x35f480: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x35f480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x35f484: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f488: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x35f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35f48c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x35f48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x35f490: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35f490u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35f494: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x35F494u;
    SET_GPR_U32(ctx, 31, 0x35F49Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x35F494u, 0x35F49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F49Cu;
label_35f49c:
    // 0x35f49c: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x35f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x35f4a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4a4: 0xac4312ac  sw          $v1, 0x12AC($v0)
    ctx->pc = 0x35f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4780), GPR_U32(ctx, 3));
    // 0x35f4a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4ac: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x35f4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x35f4b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4b4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f4b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f4b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f4bc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35f4c0:
    // 0x35f4c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f4c4: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f4c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f4c8: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f4c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f4cc: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f4d0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f4d8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4dc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f4e0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4e4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f4e8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4ec: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f4f0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f4f4: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f4f8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f4fc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f500: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f504: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f508: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f50c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f510: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f514: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f518: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f51c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f520: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f520u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f524: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f528: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f52c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f534: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f538: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f538u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f53c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f544: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f548: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f548u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f54c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f550: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f554: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f558: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f55c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f560: 0x8c6212ac  lw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x35f564: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35f568: 0xac6212ac  sw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f568u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
    // 0x35f56c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f570: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x35f570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f574: 0x2841ffb0  slti        $at, $v0, -0x50
    ctx->pc = 0x35f574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967216) ? 1 : 0);
    // 0x35f578: 0x1020003e  beqz        $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x35F578u;
    {
        const bool branch_taken_0x35f578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f578) {
            ctx->pc = 0x35F674u;
            goto label_35f674;
        }
    }
    ctx->pc = 0x35F580u;
    // 0x35f580: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f584: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f584u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f58c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f58cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x35f590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f594: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f598: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x35f598u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f59c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x35F59Cu;
    {
        const bool branch_taken_0x35f59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f59c) {
            ctx->pc = 0x35F674u;
            goto label_35f674;
        }
    }
    ctx->pc = 0x35F5A4u;
label_35f5a4:
    // 0x35f5a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f5a8: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f5a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f5ac: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f5acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f5b0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f5b4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5b8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f5bc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5c0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x35f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x35f5cc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5d0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f5d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5d8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f5dc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5e0: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35f5e8: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f5e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f5ec: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35f5f0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f5f4: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f5f8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f5fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f600: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f604: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f604u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f608: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f60c: 0x8c4412ac  lw          $a0, 0x12AC($v0)
    ctx->pc = 0x35f60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f610: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f618: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35f61c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f61cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f620: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35f620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f624: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f628: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f62c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f630: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f634: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35f638: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35f638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35f63c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35f640: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f644: 0x8c6212ac  lw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4780)));
    // 0x35f648: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f64c: 0xac6212ac  sw          $v0, 0x12AC($v1)
    ctx->pc = 0x35f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4780), GPR_U32(ctx, 2));
    // 0x35f650: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f654: 0x8c4212ac  lw          $v0, 0x12AC($v0)
    ctx->pc = 0x35f654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4780)));
    // 0x35f658: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x35f658u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
    // 0x35f65c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x35F65Cu;
    {
        const bool branch_taken_0x35f65c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f65c) {
            ctx->pc = 0x35F674u;
            goto label_35f674;
        }
    }
    ctx->pc = 0x35F664u;
    // 0x35f664: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f668: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f66c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x35f670: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f670u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35f674:
    // 0x35f674: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f678: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x35f678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x35f67c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35f67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f680: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f684: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35F684u;
    {
        const bool branch_taken_0x35f684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f684) {
            ctx->pc = 0x35F6D8u;
            goto label_35f6d8;
        }
    }
    ctx->pc = 0x35F68Cu;
    // 0x35f68c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F68Cu;
    {
        const bool branch_taken_0x35f68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f68c) {
            ctx->pc = 0x35F69Cu;
            goto label_35f69c;
        }
    }
    ctx->pc = 0x35F694u;
    // 0x35f694: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x35F694u;
    {
        const bool branch_taken_0x35f694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f694) {
            ctx->pc = 0x35F73Cu;
            goto label_35f73c;
        }
    }
    ctx->pc = 0x35F69Cu;
label_35f69c:
    // 0x35f69c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6a0: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f6a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x35f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x35f6a8: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f6ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6b0: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f6b4: 0x2c410061  sltiu       $at, $v0, 0x61
    ctx->pc = 0x35f6b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x35f6b8: 0x14200020  bnez        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x35F6B8u;
    {
        const bool branch_taken_0x35f6b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f6b8) {
            ctx->pc = 0x35F73Cu;
            goto label_35f73c;
        }
    }
    ctx->pc = 0x35F6C0u;
    // 0x35f6c0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6c4: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x35f6c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x35f6c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f6cc: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x35f6ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f6d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x35F6D0u;
    {
        const bool branch_taken_0x35f6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6d0) {
            ctx->pc = 0x35F73Cu;
            goto label_35f73c;
        }
    }
    ctx->pc = 0x35F6D8u;
label_35f6d8:
    // 0x35f6d8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6dc: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f6e0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x35f6e4: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f6e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f6ec: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f6f0: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x35f6f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35f6f4: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x35F6F4u;
    {
        const bool branch_taken_0x35f6f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f6f4) {
            ctx->pc = 0x35F73Cu;
            goto label_35f73c;
        }
    }
    ctx->pc = 0x35F6FCu;
    // 0x35f6fc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f700: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35f700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f704: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35f704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35f708: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f70c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35f70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35f710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f714: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f718: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35f718u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f71c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f720: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35f720u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f724: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f728: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35f728u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f72c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f730: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35f730u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f734: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f738: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35f738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_35f73c:
    // 0x35f73c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f740: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35f740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35f744: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35f744u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35f748: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35f748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f74c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x35f74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35f750: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x35F750u;
    SET_GPR_U32(ctx, 31, 0x35F758u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x35F750u, 0x35F758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F758u;
label_35f758:
    // 0x35f758: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f75c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f760: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f764: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x35f764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f768: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35f768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35f76c: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35f770: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35f770u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f774: 0xc096234  jal         func_2588D0
    ctx->pc = 0x35F774u;
    SET_GPR_U32(ctx, 31, 0x35F77Cu);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x35F774u, 0x35F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F77Cu;
label_35f77c:
    // 0x35f77c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35f77cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f780: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35f780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f784: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35f784u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f788: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35f788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35f78c: 0x3e00008  jr          $ra
    ctx->pc = 0x35F78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F794u;
}
