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

// Function: entry_001248b0
// Address: 0x1248b0 - 0x124904
void entry_001248b0_0x1248b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001248b0_0x1248b0");
#endif

    switch (ctx->pc) {
        case 0x1248e4u: goto label_1248e4;
        default: break;
    }

    ctx->pc = 0x1248b0u;

    // 0x1248b0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1248b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248b4: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x1248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1248b8: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x1248b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x1248bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1248bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1248c0: 0x0  nop
    ctx->pc = 0x1248c0u;
    // NOP
    // 0x1248c4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1248c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1248c8: 0x0  nop
    ctx->pc = 0x1248c8u;
    // NOP
    // 0x1248cc: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x1248CCu;
    {
        const bool branch_taken_0x1248cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1248cc) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x1248D4u;
    // 0x1248d4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1248d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1248d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1248dc: 0xc05d25c  jal         func_174970
    ctx->pc = 0x1248DCu;
    SET_GPR_U32(ctx, 31, 0x1248E4u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x1248DCu, 0x1248E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1248E4u;
label_1248e4:
    // 0x1248e4: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1248E4u;
    {
        const bool branch_taken_0x1248e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248e4) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x1248ECu;
    // 0x1248ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1248ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1248f0: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x1248f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1248f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1248f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1248f8: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x1248f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1248fc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1248FCu;
    {
        const bool branch_taken_0x1248fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1248fc) {
            ctx->pc = 0x124A58u;
            return;
        }
    }
    ctx->pc = 0x124904u;
}
