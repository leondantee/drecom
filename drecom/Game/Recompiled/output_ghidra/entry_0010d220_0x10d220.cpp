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

// Function: entry_0010d220
// Address: 0x10d220 - 0x10d24c
void entry_0010d220_0x10d220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d220_0x10d220");
#endif

    switch (ctx->pc) {
        case 0x10d228u: goto label_10d228;
        case 0x10d248u: goto label_10d248;
        default: break;
    }

    ctx->pc = 0x10d220u;

    // 0x10d220: 0xc084a98  jal         func_212A60
    ctx->pc = 0x10D220u;
    SET_GPR_U32(ctx, 31, 0x10D228u);
    ctx->pc = 0x10D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D220u;
    // 0x10d224: 0x8ee445c0  lw          $a0, 0x45C0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17856)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212A60u;
    {
        ctx->pc = 0x10D228u;
        ps2_syscalls::WaitSema(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D228u) { return; }
    ctx->pc = 0x10D228u;
label_10d228:
    // 0x10d228: 0x8e6345f8  lw          $v1, 0x45F8($s3)
    ctx->pc = 0x10d228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17912)));
    // 0x10d22c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10d230: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D230u;
    {
        const bool branch_taken_0x10d230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D230u;
        // 0x10d234: 0x8ea245a8  lw          $v0, 0x45A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d230) {
            ctx->pc = 0x10D24Cu;
            return;
        }
    }
    ctx->pc = 0x10D238u;
    // 0x10d238: 0xae4045c4  sw          $zero, 0x45C4($s2)
    ctx->pc = 0x10d238u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17860), GPR_U32(ctx, 0));
    // 0x10d23c: 0xaec045b4  sw          $zero, 0x45B4($s6)
    ctx->pc = 0x10d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 17844), GPR_U32(ctx, 0));
    // 0x10d240: 0xc084a18  jal         func_212860
    ctx->pc = 0x10D240u;
    SET_GPR_U32(ctx, 31, 0x10D248u);
    ctx->pc = 0x10D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D240u;
    // 0x10d244: 0xae6045f8  sw          $zero, 0x45F8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 17912), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212860u;
    {
        ctx->pc = 0x10D248u;
        ps2_syscalls::ExitDeleteThread(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D248u) { return; }
    ctx->pc = 0x10D248u;
label_10d248:
    // 0x10d248: 0x8ea245a8  lw          $v0, 0x45A8($s5)
    ctx->pc = 0x10d248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 17832)));
    ctx->pc = 0x10d24cu;
}
