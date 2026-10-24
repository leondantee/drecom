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

// Function: entry_001a9d54
// Address: 0x1a9d54 - 0x1a9d94
void entry_001a9d54_0x1a9d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a9d54_0x1a9d54");
#endif

    switch (ctx->pc) {
        case 0x1a9d8cu: goto label_1a9d8c;
        default: break;
    }

    ctx->pc = 0x1a9d54u;

    // 0x1a9d54: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a9d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d58: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x1a9d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x1a9d5c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9d60: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9D60u;
    {
        const bool branch_taken_0x1a9d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9d60) {
            ctx->pc = 0x1A9D94u;
            return;
        }
    }
    ctx->pc = 0x1A9D68u;
    // 0x1a9d68: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1a9d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a9d6c: 0x3c02466a  lui         $v0, 0x466A
    ctx->pc = 0x1a9d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18026 << 16));
    // 0x1a9d70: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x1a9d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x1a9d74: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1a9d74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a9d78: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1a9d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1a9d7c: 0x246500b0  addiu       $a1, $v1, 0xB0
    ctx->pc = 0x1a9d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 176));
    // 0x1a9d80: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x1a9d80u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1a9d84: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x1A9D84u;
    SET_GPR_U32(ctx, 31, 0x1A9D8Cu);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x1A9D84u, 0x1A9D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9D8Cu;
label_1a9d8c:
    // 0x1a9d8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A9D8Cu;
    {
        const bool branch_taken_0x1a9d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9d8c) {
            ctx->pc = 0x1A9DB8u;
            return;
        }
    }
    ctx->pc = 0x1A9D94u;
}
