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

// Function: entry_00114088
// Address: 0x114088 - 0x1140ac
void entry_00114088_0x114088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114088_0x114088");
#endif

    ctx->pc = 0x114088u;

label_114088:
    // 0x114088: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x114088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x11408c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x11408cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x114090: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x114090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x114094: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x114094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x114098: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x114098u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x11409c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11409Cu;
    {
        const bool branch_taken_0x11409c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x11409c) {
            ctx->pc = 0x114088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_114088;
        }
    }
    ctx->pc = 0x1140A4u;
    // 0x1140a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1140A4u;
    {
        const bool branch_taken_0x1140a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1140A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1140A4u;
        // 0x1140a8: 0xe6e20000  swc1        $f2, 0x0($s7) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1140a4) {
            ctx->pc = 0x1140B4u;
            return;
        }
    }
    ctx->pc = 0x1140ACu;
}
