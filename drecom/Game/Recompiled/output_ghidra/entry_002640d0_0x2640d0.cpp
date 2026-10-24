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

// Function: entry_002640d0
// Address: 0x2640d0 - 0x264134
void entry_002640d0_0x2640d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002640d0_0x2640d0");
#endif

    ctx->pc = 0x2640d0u;

    // 0x2640d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2640d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640d8: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x2640d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x2640dc: 0x2442107c  addiu       $v0, $v0, 0x107C
    ctx->pc = 0x2640dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4220));
    // 0x2640e0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2640e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2640e4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2640e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2640e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640ec: 0x944210a0  lhu         $v0, 0x10A0($v0)
    ctx->pc = 0x2640ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4256)));
    // 0x2640f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2640f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2640f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2640f8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2640f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2640fc: 0x8c420ca0  lw          $v0, 0xCA0($v0)
    ctx->pc = 0x2640fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3232)));
    // 0x264100: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264104: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264108: 0x24421078  addiu       $v0, $v0, 0x1078
    ctx->pc = 0x264108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4216));
    // 0x26410c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x26410cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264110: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x264110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x264114: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264118: 0x94421078  lhu         $v0, 0x1078($v0)
    ctx->pc = 0x264118u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4216)));
    // 0x26411c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26411cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x264120: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x264120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x264124: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x264124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x264128: 0xac431098  sw          $v1, 0x1098($v0)
    ctx->pc = 0x264128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4248), GPR_U32(ctx, 3));
    // 0x26412c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26412Cu;
    {
        const bool branch_taken_0x26412c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26412c) {
            ctx->pc = 0x26415Cu;
            return;
        }
    }
    ctx->pc = 0x264134u;
}
