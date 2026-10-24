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

// Function: entry_0029f4b8
// Address: 0x29f4b8 - 0x29f574
void entry_0029f4b8_0x29f4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029f4b8_0x29f4b8");
#endif

    switch (ctx->pc) {
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f528u: goto label_29f528;
        default: break;
    }

    ctx->pc = 0x29f4b8u;

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
            return;
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
            return;
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
            return;
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
            return;
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
    ctx->pc = 0x29f574u;
}
