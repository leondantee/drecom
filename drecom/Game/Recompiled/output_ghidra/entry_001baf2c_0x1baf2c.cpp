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

// Function: entry_001baf2c
// Address: 0x1baf2c - 0x1baf84
void entry_001baf2c_0x1baf2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001baf2c_0x1baf2c");
#endif

    switch (ctx->pc) {
        case 0x1baf3cu: goto label_1baf3c;
        default: break;
    }

    ctx->pc = 0x1baf2cu;

    // 0x1baf2c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf30: 0x24440180  addiu       $a0, $v0, 0x180
    ctx->pc = 0x1baf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x1baf34: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x1BAF34u;
    SET_GPR_U32(ctx, 31, 0x1BAF3Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x1BAF34u, 0x1BAF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BAF3Cu;
label_1baf3c:
    // 0x1baf3c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf40: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x1baf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x1baf44: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BAF44u;
    {
        const bool branch_taken_0x1baf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf44) {
            ctx->pc = 0x1BAF84u;
            return;
        }
    }
    ctx->pc = 0x1BAF4Cu;
    // 0x1baf4c: 0x3c0242a2  lui         $v0, 0x42A2
    ctx->pc = 0x1baf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17058 << 16));
    // 0x1baf50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1baf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf58: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1baf58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1baf5c: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1baf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1baf60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1baf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf64: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1baf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf68: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x1baf68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x1baf6c: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x1baf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
    // 0x1baf70: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1baf70u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1baf74: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1baf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1baf78: 0xe4a00188  swc1        $f0, 0x188($a1)
    ctx->pc = 0x1baf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 392), bits); }
    // 0x1baf7c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BAF7Cu;
    {
        const bool branch_taken_0x1baf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1baf7c) {
            ctx->pc = 0x1BAFBCu;
            return;
        }
    }
    ctx->pc = 0x1BAF84u;
}
