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

// Function: entry_0019b46c
// Address: 0x19b46c - 0x19b4f4
void entry_0019b46c_0x19b46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b46c_0x19b46c");
#endif

    switch (ctx->pc) {
        case 0x19b49cu: goto label_19b49c;
        default: break;
    }

    ctx->pc = 0x19b46cu;

    // 0x19b46c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b470: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19b470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19b474: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19b474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19b478: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19b478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19b47c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x19B47Cu;
    {
        const bool branch_taken_0x19b47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b47c) {
            ctx->pc = 0x19B4F4u;
            return;
        }
    }
    ctx->pc = 0x19B484u;
    // 0x19b484: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b488: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19b48c: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x19b48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x19b490: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x19b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19b494: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x19B494u;
    SET_GPR_U32(ctx, 31, 0x19B49Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x19B494u, 0x19B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B49Cu;
label_19b49c:
    // 0x19b49c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x19b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x19b4a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19b4a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19b4a4: 0x0  nop
    ctx->pc = 0x19b4a4u;
    // NOP
    // 0x19b4a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x19b4a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19b4ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4b0: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x19b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19b4b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x19b4b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19b4b8: 0x0  nop
    ctx->pc = 0x19b4b8u;
    // NOP
    // 0x19b4bc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x19B4BCu;
    {
        const bool branch_taken_0x19b4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b4bc) {
            ctx->pc = 0x19B4F4u;
            return;
        }
    }
    ctx->pc = 0x19B4C4u;
    // 0x19b4c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b4c8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4cc: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x19b4ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b4d0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x19b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x19b4d4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4d8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x19b4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x19b4dc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4e0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x19b4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4e8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x19b4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b4ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b4f0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x19b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x19b4f4u;
}
