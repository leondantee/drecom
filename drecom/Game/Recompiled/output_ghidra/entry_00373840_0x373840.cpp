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

// Function: entry_00373840
// Address: 0x373840 - 0x3738a4
void entry_00373840_0x373840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00373840_0x373840");
#endif

    ctx->pc = 0x373840u;

    // 0x373840: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x373840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373844: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373848: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x373848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x37384c: 0x244209dc  addiu       $v0, $v0, 0x9DC
    ctx->pc = 0x37384cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2524));
    // 0x373850: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x373850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373854: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373858: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37385c: 0x94420a00  lhu         $v0, 0xA00($v0)
    ctx->pc = 0x37385cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2560)));
    // 0x373860: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x373860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373864: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x373864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373868: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37386c: 0x8c4205f8  lw          $v0, 0x5F8($v0)
    ctx->pc = 0x37386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1528)));
    // 0x373870: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x373870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x373874: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373878: 0x244209d8  addiu       $v0, $v0, 0x9D8
    ctx->pc = 0x373878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2520));
    // 0x37387c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x37387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x373880: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x373880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x373884: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373888: 0x944209d8  lhu         $v0, 0x9D8($v0)
    ctx->pc = 0x373888u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2520)));
    // 0x37388c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x37388cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x373890: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x373890u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x373894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x373894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373898: 0xac4309f8  sw          $v1, 0x9F8($v0)
    ctx->pc = 0x373898u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2552), GPR_U32(ctx, 3));
    // 0x37389c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x37389Cu;
    {
        const bool branch_taken_0x37389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37389c) {
            ctx->pc = 0x3738CCu;
            return;
        }
    }
    ctx->pc = 0x3738A4u;
}
