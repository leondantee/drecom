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

// Function: entry_00175224
// Address: 0x175224 - 0x17525c
void entry_00175224_0x175224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175224_0x175224");
#endif

    switch (ctx->pc) {
        case 0x175240u: goto label_175240;
        case 0x17524cu: goto label_17524c;
        default: break;
    }

    ctx->pc = 0x175224u;

    // 0x175224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175228: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x175228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17522c: 0xac22bcf8  sw          $v0, -0x4308($at)
    ctx->pc = 0x17522cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x47BCF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47BCF8u, _value); } while (0);
    // 0x175230: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175234: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x175234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x175238: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x175238u;
    SET_GPR_U32(ctx, 31, 0x175240u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x175238u, 0x175240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175240u;
label_175240:
    // 0x175240: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x175240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175244: 0xc0974e8  jal         func_25D3A0
    ctx->pc = 0x175244u;
    SET_GPR_U32(ctx, 31, 0x17524Cu);
    ctx->pc = 0x25D3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D3A0u, 0x175244u, 0x17524Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17524Cu;
label_17524c:
    // 0x17524c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17524cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x175250: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x175250u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x175254: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175254u;
    {
        const bool branch_taken_0x175254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x175254) {
            ctx->pc = 0x175264u;
            return;
        }
    }
    ctx->pc = 0x17525Cu;
}
