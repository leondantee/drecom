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

// Function: entry_0032636c
// Address: 0x32636c - 0x3263c8
void entry_0032636c_0x32636c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032636c_0x32636c");
#endif

    switch (ctx->pc) {
        case 0x326388u: goto label_326388;
        case 0x3263c0u: goto label_3263c0;
        default: break;
    }

    ctx->pc = 0x32636cu;

    // 0x32636c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x32636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326370: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x326374: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x326374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326378: 0x8c650114  lw          $a1, 0x114($v1)
    ctx->pc = 0x326378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
    // 0x32637c: 0x244600d0  addiu       $a2, $v0, 0xD0
    ctx->pc = 0x32637cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x326380: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x326380u;
    SET_GPR_U32(ctx, 31, 0x326388u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x326388u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x326388u) { return; }
    ctx->pc = 0x326388u;
label_326388:
    // 0x326388: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x326388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32638c: 0x94420118  lhu         $v0, 0x118($v0)
    ctx->pc = 0x32638cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x326390: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x326390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x326394: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x326394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x326398: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x326398u;
    {
        const bool branch_taken_0x326398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x326398) {
            ctx->pc = 0x3263C8u;
            return;
        }
    }
    ctx->pc = 0x3263A0u;
    // 0x3263a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3263a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263a4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3263a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263a8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3263a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3263ac: 0x248400e0  addiu       $a0, $a0, 0xE0
    ctx->pc = 0x3263acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
    // 0x3263b0: 0x24650050  addiu       $a1, $v1, 0x50
    ctx->pc = 0x3263b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3263b4: 0x24460050  addiu       $a2, $v0, 0x50
    ctx->pc = 0x3263b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x3263b8: 0xc0c9694  jal         func_325A50
    ctx->pc = 0x3263B8u;
    SET_GPR_U32(ctx, 31, 0x3263C0u);
    ctx->pc = 0x325A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325A50u, 0x3263B8u, 0x3263C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3263C0u;
label_3263c0:
    // 0x3263c0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3263C0u;
    {
        const bool branch_taken_0x3263c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3263c0) {
            ctx->pc = 0x3263F8u;
            return;
        }
    }
    ctx->pc = 0x3263C8u;
}
