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

// Function: Em02_R1_br_mv04
// Address: 0x29f450 - 0x29f5f4
void Em02_R1_br_mv04_0x29f450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em02_R1_br_mv04_0x29f450");
#endif

    switch (ctx->pc) {
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f528u: goto label_29f528;
        default: break;
    }

    ctx->pc = 0x29f450u;

    // 0x29f450: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29f450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29f454: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x29f454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x29f458: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x29f458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x29f45c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f460: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f464: 0x8c63004c  lw          $v1, 0x4C($v1)
    ctx->pc = 0x29f464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x29f468: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x29F468u;
    {
        const bool branch_taken_0x29f468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f468) {
            ctx->pc = 0x29F4B8u;
            goto label_29f4b8;
        }
    }
    ctx->pc = 0x29F470u;
    // 0x29f470: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f474: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f478: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x29f478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x29f47c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x29f47cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x29f480: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F480u;
    {
        const bool branch_taken_0x29f480 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f480) {
            ctx->pc = 0x29F4B8u;
            goto label_29f4b8;
        }
    }
    ctx->pc = 0x29F488u;
    // 0x29f488: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f48c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f490: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f490u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f494: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29f494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29f498: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f49c: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f49cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f4a0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f4a4: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f4a8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f4ac: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f4acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f4b0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f4b4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f4b8:
    // 0x29f4b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f4bc: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x29f4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f4c0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x29f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x29f4c4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x29f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29f4c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29f4c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29f4cc: 0x0  nop
    ctx->pc = 0x29f4ccu;
    // NOP
    // 0x29f4d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x29f4d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f4d4: 0x0  nop
    ctx->pc = 0x29f4d4u;
    // NOP
    // 0x29f4d8: 0x45000026  bc1f        . + 4 + (0x26 << 2)
    ctx->pc = 0x29F4D8u;
    {
        const bool branch_taken_0x29f4d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f4d8) {
            ctx->pc = 0x29F574u;
            goto label_29f574;
        }
    }
    ctx->pc = 0x29F4E0u;
    // 0x29f4e0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f4e4: 0x2445dbc0  addiu       $a1, $v0, -0x2440
    ctx->pc = 0x29f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x29f4e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f4ec: 0xc05cd90  jal         func_173640
    ctx->pc = 0x29F4ECu;
    SET_GPR_U32(ctx, 31, 0x29F4F4u);
    ctx->pc = 0x173640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173640u, 0x29F4ECu, 0x29F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F4F4u;
label_29f4f4:
    // 0x29f4f4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29F4F4u;
    {
        const bool branch_taken_0x29f4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f4f4) {
            ctx->pc = 0x29F574u;
            goto label_29f574;
        }
    }
    ctx->pc = 0x29F4FCu;
    // 0x29f4fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f500: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f504: 0x3c023f06  lui         $v0, 0x3F06
    ctx->pc = 0x29f504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16134 << 16));
    // 0x29f508: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x29f508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x29f50c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29f510: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x29f510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x29f514: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x29f514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29f518: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x29f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x29f51c: 0x2445dce0  addiu       $a1, $v0, -0x2320
    ctx->pc = 0x29f51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x29f520: 0xc05caf8  jal         func_172BE0
    ctx->pc = 0x29F520u;
    SET_GPR_U32(ctx, 31, 0x29F528u);
    ctx->pc = 0x172BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172BE0u, 0x29F520u, 0x29F528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F528u;
label_29f528:
    // 0x29f528: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29F528u;
    {
        const bool branch_taken_0x29f528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f528) {
            ctx->pc = 0x29F574u;
            goto label_29f574;
        }
    }
    ctx->pc = 0x29F530u;
    // 0x29f530: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f534: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f538: 0x94630044  lhu         $v1, 0x44($v1)
    ctx->pc = 0x29f538u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x29f53c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x29F53Cu;
    {
        const bool branch_taken_0x29f53c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f53c) {
            ctx->pc = 0x29F574u;
            goto label_29f574;
        }
    }
    ctx->pc = 0x29F544u;
    // 0x29f544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f548: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f54c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f54cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f550: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x29f550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29f554: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f558: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f558u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f55c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f560: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f560u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f564: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f568: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f568u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f56c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f570: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f574:
    // 0x29f574: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f578: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f57c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x29f57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29f580: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f584: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x29f584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29f588: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x29f588u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29f58c: 0x0  nop
    ctx->pc = 0x29f58cu;
    // NOP
    // 0x29f590: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x29F590u;
    {
        const bool branch_taken_0x29f590 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29f590) {
            ctx->pc = 0x29F5E4u;
            goto label_29f5e4;
        }
    }
    ctx->pc = 0x29F598u;
    // 0x29f598: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f59c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x29f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x29f5a0: 0x94630048  lhu         $v1, 0x48($v1)
    ctx->pc = 0x29f5a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x29f5a4: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x29f5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29f5a8: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x29f5a8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x29f5ac: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x29F5ACu;
    {
        const bool branch_taken_0x29f5ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x29f5ac) {
            ctx->pc = 0x29F5E4u;
            goto label_29f5e4;
        }
    }
    ctx->pc = 0x29F5B4u;
    // 0x29f5b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29f5b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x29f5bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f5c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29f5c4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5c8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x29f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x29f5cc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5d0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x29f5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f5d4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5d8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x29f5d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x29f5dc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29f5e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x29f5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_29f5e4:
    // 0x29f5e4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x29f5e4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f5e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x29f5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x29f5ec: 0x3e00008  jr          $ra
    ctx->pc = 0x29F5ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F5ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F5F4u;
}
