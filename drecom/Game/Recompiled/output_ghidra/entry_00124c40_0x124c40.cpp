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

// Function: entry_00124c40
// Address: 0x124c40 - 0x124c94
void entry_00124c40_0x124c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124c40_0x124c40");
#endif

    switch (ctx->pc) {
        case 0x124c74u: goto label_124c74;
        default: break;
    }

    ctx->pc = 0x124c40u;

    // 0x124c40: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x124c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c44: 0xc4611288  lwc1        $f1, 0x1288($v1)
    ctx->pc = 0x124c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x124c48: 0x3c0344fa  lui         $v1, 0x44FA
    ctx->pc = 0x124c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17658 << 16));
    // 0x124c4c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x124c4cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x124c50: 0x0  nop
    ctx->pc = 0x124c50u;
    // NOP
    // 0x124c54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x124c54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x124c58: 0x0  nop
    ctx->pc = 0x124c58u;
    // NOP
    // 0x124c5c: 0x45000062  bc1f        . + 4 + (0x62 << 2)
    ctx->pc = 0x124C5Cu;
    {
        const bool branch_taken_0x124c5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x124c5c) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C64u;
    // 0x124c64: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x124c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x124c6c: 0xc05d25c  jal         func_174970
    ctx->pc = 0x124C6Cu;
    SET_GPR_U32(ctx, 31, 0x124C74u);
    ctx->pc = 0x174970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174970u, 0x124C6Cu, 0x124C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C74u;
label_124c74:
    // 0x124c74: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x124C74u;
    {
        const bool branch_taken_0x124c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c74) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C7Cu;
    // 0x124c7c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x124c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c80: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x124c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x124c84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x124c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x124c88: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x124c88u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x124c8c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x124C8Cu;
    {
        const bool branch_taken_0x124c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x124c8c) {
            ctx->pc = 0x124DE8u;
            return;
        }
    }
    ctx->pc = 0x124C94u;
}
