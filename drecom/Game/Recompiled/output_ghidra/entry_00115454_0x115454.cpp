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

// Function: entry_00115454
// Address: 0x115454 - 0x115474
void entry_00115454_0x115454(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115454_0x115454");
#endif

    switch (ctx->pc) {
        case 0x11545cu: goto label_11545c;
        default: break;
    }

    ctx->pc = 0x115454u;

    // 0x115454: 0xc0448c6  jal         func_112318
    ctx->pc = 0x115454u;
    SET_GPR_U32(ctx, 31, 0x11545Cu);
    ctx->pc = 0x115458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115454u;
    // 0x115458: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112318u;
    {
        ctx->pc = 0x11545Cu;
        ps2_stubs::__ieee754_rem_pio2f(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11545Cu) { return; }
    ctx->pc = 0x11545Cu;
label_11545c:
    // 0x11545c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x11545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x115460: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115464: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x115464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x115468: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x115468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x11546c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x11546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x115470: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->pc = 0x115474u;
}
