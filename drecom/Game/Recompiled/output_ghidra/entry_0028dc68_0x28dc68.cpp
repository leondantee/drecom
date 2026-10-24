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

// Function: entry_0028dc68
// Address: 0x28dc68 - 0x28dcbc
void entry_0028dc68_0x28dc68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028dc68_0x28dc68");
#endif

    switch (ctx->pc) {
        case 0x28dc9cu: goto label_28dc9c;
        default: break;
    }

    ctx->pc = 0x28dc68u;

    // 0x28dc68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x28dc68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28dc6c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28dc6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28dc70: 0xe4202248  swc1        $f0, 0x2248($at)
    ctx->pc = 0x28dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x622248u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x622248u, _value); } while (0); }
    // 0x28dc74: 0x8e06685c  lw          $a2, 0x685C($s0)
    ctx->pc = 0x28dc74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dc78: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x28dc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x28dc7c: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x28DC7Cu;
    {
        const bool branch_taken_0x28dc7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc7c) {
            ctx->pc = 0x28DCFCu;
            return;
        }
    }
    ctx->pc = 0x28DC84u;
    // 0x28dc84: 0x92026624  lbu         $v0, 0x6624($s0)
    ctx->pc = 0x28dc84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26148)));
    // 0x28dc88: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x28dc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28dc8c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28DC8Cu;
    {
        const bool branch_taken_0x28dc8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dc8c) {
            ctx->pc = 0x28DCBCu;
            return;
        }
    }
    ctx->pc = 0x28DC94u;
    // 0x28dc94: 0xc0762d8  jal         func_1D8B60
    ctx->pc = 0x28DC94u;
    SET_GPR_U32(ctx, 31, 0x28DC9Cu);
    ctx->pc = 0x1D8B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B60u, 0x28DC94u, 0x28DC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28DC9Cu;
label_28dc9c:
    // 0x28dc9c: 0x144003a0  bnez        $v0, . + 4 + (0x3A0 << 2)
    ctx->pc = 0x28DC9Cu;
    {
        const bool branch_taken_0x28dc9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dc9c) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DCA4u;
    // 0x28dca4: 0x8e13685c  lw          $s3, 0x685C($s0)
    ctx->pc = 0x28dca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28dca8: 0x2414fffd  addiu       $s4, $zero, -0x3
    ctx->pc = 0x28dca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x28dcac: 0x2741024  and         $v0, $s3, $s4
    ctx->pc = 0x28dcacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 20));
    // 0x28dcb0: 0xae02685c  sw          $v0, 0x685C($s0)
    ctx->pc = 0x28dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 2));
    // 0x28dcb4: 0x1000039a  b           . + 4 + (0x39A << 2)
    ctx->pc = 0x28DCB4u;
    {
        const bool branch_taken_0x28dcb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dcb4) {
            ctx->pc = 0x28EB20u;
            return;
        }
    }
    ctx->pc = 0x28DCBCu;
}
