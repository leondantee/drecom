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

// Function: entry_0023946c
// Address: 0x23946c - 0x23951c
void entry_0023946c_0x23946c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023946c_0x23946c");
#endif

    switch (ctx->pc) {
        case 0x2394dcu: goto label_2394dc;
        default: break;
    }

    ctx->pc = 0x23946cu;

    // 0x23946c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239470: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x239470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x239474: 0x8463005c  lh          $v1, 0x5C($v1)
    ctx->pc = 0x239474u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x239478: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x239478u;
    {
        const bool branch_taken_0x239478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x239478) {
            ctx->pc = 0x23951Cu;
            return;
        }
    }
    ctx->pc = 0x239480u;
    // 0x239480: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239484: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x239484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x239488: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x239488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x23948c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23948cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x239490: 0x0  nop
    ctx->pc = 0x239490u;
    // NOP
    // 0x239494: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x239494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x239498: 0x0  nop
    ctx->pc = 0x239498u;
    // NOP
    // 0x23949c: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23949c) {
            ctx->pc = 0x23951Cu;
            return;
        }
    }
    ctx->pc = 0x2394A4u;
    // 0x2394a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2394a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2394a8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394ac: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x2394acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2394b0: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2394b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394b8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x2394b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2394bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394c0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x2394c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2394c4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394c8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x2394c8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2394cc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2394ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2394d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2394d4: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2394D4u;
    SET_GPR_U32(ctx, 31, 0x2394DCu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2394D4u, 0x2394DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2394DCu;
label_2394dc:
    // 0x2394dc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2394dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2394e0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x2394e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x2394e4: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2394E4u;
    {
        const bool branch_taken_0x2394e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2394e4) {
            ctx->pc = 0x23951Cu;
            return;
        }
    }
    ctx->pc = 0x2394ECu;
    // 0x2394ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2394ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2394f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2394f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2394f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2394f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2394f8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2394fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239500: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x239500u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x239504: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239508: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x239508u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x23950c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239510: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x239510u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x239514: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x239514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x239518: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x239518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x23951cu;
}
