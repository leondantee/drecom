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

// Function: Om97_R1_mv03
// Address: 0x35f870 - 0x35fae4
void Om97_R1_mv03_0x35f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om97_R1_mv03_0x35f870");
#endif

    switch (ctx->pc) {
        case 0x35f8e8u: goto label_35f8e8;
        case 0x35faa8u: goto label_35faa8;
        case 0x35faccu: goto label_35facc;
        default: break;
    }

    ctx->pc = 0x35f870u;

    // 0x35f870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x35f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x35f874: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x35f874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x35f878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x35f87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x35f880: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x35f880u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x35f884: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x35f884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x35f888: 0x2442ab30  addiu       $v0, $v0, -0x54D0
    ctx->pc = 0x35f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945584));
    // 0x35f88c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x35f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35f890: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x35f890u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3AAB30u));
    // 0x35f894: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x35f894u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x35f898: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f89c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x35f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x35f8a0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x35f8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x35f8a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x35f8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x35f8a8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f8ac: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x35f8acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x35f8b0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x35f8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35f8b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35f8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35f8b8: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x35F8B8u;
    {
        const bool branch_taken_0x35f8b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f8b8) {
            ctx->pc = 0x35F940u;
            goto label_35f940;
        }
    }
    ctx->pc = 0x35F8C0u;
    // 0x35f8c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f8c4: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x35F8C4u;
    {
        const bool branch_taken_0x35f8c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x35f8c4) {
            ctx->pc = 0x35F904u;
            goto label_35f904;
        }
    }
    ctx->pc = 0x35F8CCu;
    // 0x35f8cc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35F8CCu;
    {
        const bool branch_taken_0x35f8cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f8cc) {
            ctx->pc = 0x35F8DCu;
            goto label_35f8dc;
        }
    }
    ctx->pc = 0x35F8D4u;
    // 0x35f8d4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x35F8D4u;
    {
        const bool branch_taken_0x35f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f8d4) {
            ctx->pc = 0x35F9C4u;
            goto label_35f9c4;
        }
    }
    ctx->pc = 0x35F8DCu;
label_35f8dc:
    // 0x35f8dc: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f8e0: 0xc0d7ca4  jal         func_35F290
    ctx->pc = 0x35F8E0u;
    SET_GPR_U32(ctx, 31, 0x35F8E8u);
    ctx->pc = 0x35F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F290u, 0x35F8E0u, 0x35F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F8E8u;
label_35f8e8:
    // 0x35f8e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f8ec: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f8ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f8f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f8f4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f8f8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x35f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x35f8fc: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f900: 0xac431290  sw          $v1, 0x1290($v0)
    ctx->pc = 0x35f900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 3));
label_35f904:
    // 0x35f904: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f908: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x35f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x35f90c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x35f90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x35f910: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x35f910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x35f914: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f918: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35f91c: 0x2c410061  sltiu       $at, $v0, 0x61
    ctx->pc = 0x35f91cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)97) ? 1 : 0);
    // 0x35f920: 0x14200028  bnez        $at, . + 4 + (0x28 << 2)
    ctx->pc = 0x35F920u;
    {
        const bool branch_taken_0x35f920 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x35f920) {
            ctx->pc = 0x35F9C4u;
            goto label_35f9c4;
        }
    }
    ctx->pc = 0x35F928u;
    // 0x35f928: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f92c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f930: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f934: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f934u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x35f938: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x35F938u;
    {
        const bool branch_taken_0x35f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f938) {
            ctx->pc = 0x35F9C4u;
            goto label_35f9c4;
        }
    }
    ctx->pc = 0x35F940u;
label_35f940:
    // 0x35f940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f944: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f94c: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f950: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f954: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x35f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x35f958: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x35f95c: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x35f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x35f960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f964: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35f968: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x35f968u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35f96c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F96Cu;
    {
        const bool branch_taken_0x35f96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f96c) {
            ctx->pc = 0x35F9C4u;
            goto label_35f9c4;
        }
    }
    ctx->pc = 0x35F974u;
    // 0x35f974: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f978: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f97c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35f980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f984: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35f984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35f988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f98c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f990: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35f990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f994: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f998: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35f998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f99c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9a0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35f9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f9a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9a8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35f9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f9ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35f9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f9c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
label_35f9c4:
    // 0x35f9c4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9c8: 0x8c510058  lw          $s1, 0x58($v0)
    ctx->pc = 0x35f9c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x35f9cc: 0x8e300034  lw          $s0, 0x34($s1)
    ctx->pc = 0x35f9ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x35f9d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9d4: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35f9d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f9dc: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f9e0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35f9e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x35f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x35f9e8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9ec: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35f9f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x35f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35f9f4: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35f9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35f9f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35f9fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x35f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x35fa00: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35fa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa04: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35fa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35fa08: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35fa10: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35fa18: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa1c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x35fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35fa20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa24: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x35fa24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35fa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fa2c: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35fa30: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35fa34: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35fa38: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa3c: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x35fa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x35fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35fa44: 0x8c421290  lw          $v0, 0x1290($v0)
    ctx->pc = 0x35fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4752)));
    // 0x35fa48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35fa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35fa4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35fa50: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x35fa50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x35fa54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fa58: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35fa60: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x35fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x35fa64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35fa68: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x35fa68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x35fa6c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35fa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35fa70: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35fa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa74: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x35fa74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x35fa78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35fa78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fa7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35FA7Cu;
    {
        const bool branch_taken_0x35fa7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa7c) {
            ctx->pc = 0x35FA8Cu;
            goto label_35fa8c;
        }
    }
    ctx->pc = 0x35FA84u;
    // 0x35fa84: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x35FA84u;
    {
        const bool branch_taken_0x35fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35fa84) {
            ctx->pc = 0x35FA8Cu;
            goto label_35fa8c;
        }
    }
    ctx->pc = 0x35FA8Cu;
label_35fa8c:
    // 0x35fa8c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35fa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fa90: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35fa90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35fa94: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35fa98: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35fa98u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fa9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x35fa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35faa0: 0xc0961b0  jal         func_2586C0
    ctx->pc = 0x35FAA0u;
    SET_GPR_U32(ctx, 31, 0x35FAA8u);
    ctx->pc = 0x2586C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2586C0u, 0x35FAA0u, 0x35FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FAA8u;
label_35faa8:
    // 0x35faa8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35faa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35faac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35fab0: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35fab4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x35fab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fab8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x35fab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x35fabc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x35fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x35fac0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x35fac0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35fac4: 0xc096234  jal         func_2588D0
    ctx->pc = 0x35FAC4u;
    SET_GPR_U32(ctx, 31, 0x35FACCu);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x35FAC4u, 0x35FACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35FACCu;
label_35facc:
    // 0x35facc: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x35faccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35fad0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35fad0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35fad4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35fad4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35fad8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x35fad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35fadc: 0x3e00008  jr          $ra
    ctx->pc = 0x35FADCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35FADCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35FAE4u;
}
