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

// Function: entry_0025e8b0
// Address: 0x25e8b0 - 0x25e914
void entry_0025e8b0_0x25e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e8b0_0x25e8b0");
#endif

    ctx->pc = 0x25e8b0u;

    // 0x25e8b0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x25e8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8b4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8b8: 0x24841078  addiu       $a0, $a0, 0x1078
    ctx->pc = 0x25e8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4216));
    // 0x25e8bc: 0x2463107c  addiu       $v1, $v1, 0x107C
    ctx->pc = 0x25e8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4220));
    // 0x25e8c0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e8c4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e8c8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8cc: 0x946310a0  lhu         $v1, 0x10A0($v1)
    ctx->pc = 0x25e8ccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4256)));
    // 0x25e8d0: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e8d4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25e8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e8d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8dc: 0x8c630ca0  lw          $v1, 0xCA0($v1)
    ctx->pc = 0x25e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3232)));
    // 0x25e8e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x25e8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e8e4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8e8: 0x24631078  addiu       $v1, $v1, 0x1078
    ctx->pc = 0x25e8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4216));
    // 0x25e8ec: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25e8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e8f0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x25e8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x25e8f4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e8f8: 0x94631078  lhu         $v1, 0x1078($v1)
    ctx->pc = 0x25e8f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4216)));
    // 0x25e8fc: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x25e8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x25e900: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x25e900u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x25e904: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25e904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e908: 0xac641098  sw          $a0, 0x1098($v1)
    ctx->pc = 0x25e908u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4248), GPR_U32(ctx, 4));
    // 0x25e90c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25E90Cu;
    {
        const bool branch_taken_0x25e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e90c) {
            ctx->pc = 0x25E964u;
            return;
        }
    }
    ctx->pc = 0x25E914u;
}
