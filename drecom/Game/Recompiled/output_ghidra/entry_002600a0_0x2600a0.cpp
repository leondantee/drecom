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

// Function: entry_002600a0
// Address: 0x2600a0 - 0x2600f4
void entry_002600a0_0x2600a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002600a0_0x2600a0");
#endif

    ctx->pc = 0x2600a0u;

label_2600a0:
    // 0x2600a0: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2600a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2600a4:
    // 0x2600a4: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x2600a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_2600a8:
    // 0x2600a8: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x2600a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2600ac:
    // 0x2600ac: 0x8ca202d4  lw          $v0, 0x2D4($a1)
    ctx->pc = 0x2600acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 724)));
label_2600b0:
    // 0x2600b0: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x2600b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2600b4:
    // 0x2600b4: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x2600b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2600b8:
    // 0x2600b8: 0xc7a10234  lwc1        $f1, 0x234($sp)
    ctx->pc = 0x2600b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2600bc:
    // 0x2600bc: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x2600bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2600c0:
    // 0x2600c0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2600c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2600c4:
    // 0x2600c4: 0xe7a00234  swc1        $f0, 0x234($sp)
    ctx->pc = 0x2600c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_2600c8:
    // 0x2600c8: 0x2285fffd  addi        $a1, $s4, -0x3
    ctx->pc = 0x2600c8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 20), (int32_t)4294967293, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_2600cc:
    // 0x2600cc: 0x2ca10010  sltiu       $at, $a1, 0x10
    ctx->pc = 0x2600ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2600d0:
    // 0x2600d0: 0x10200094  beqz        $at, . + 4 + (0x94 << 2)
label_2600d4:
    if (ctx->pc == 0x2600D4u) {
        ctx->pc = 0x2600D8u;
        goto label_2600d8;
    }
    ctx->pc = 0x2600D0u;
    {
        const bool branch_taken_0x2600d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2600d0) {
            ctx->pc = 0x260324u;
            return;
        }
    }
    ctx->pc = 0x2600D8u;
label_2600d8:
    // 0x2600d8: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2600d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
label_2600dc:
    // 0x2600dc: 0x24c21430  addiu       $v0, $a2, 0x1430
    ctx->pc = 0x2600dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5168));
label_2600e0:
    // 0x2600e0: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x2600e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2600e4:
    // 0x2600e4: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x2600e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2600e8:
    // 0x2600e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2600e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2600ec:
    // 0x2600ec: 0x400008  jr          $v0
label_2600f0:
    if (ctx->pc == 0x2600F0u) {
        ctx->pc = 0x2600F4u;
        goto label_fallthrough_0x2600ec;
    }
    ctx->pc = 0x2600ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2600ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2600ec:
    ctx->pc = 0x2600F4u;
}
