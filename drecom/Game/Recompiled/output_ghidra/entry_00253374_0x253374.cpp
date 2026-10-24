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

// Function: entry_00253374
// Address: 0x253374 - 0x2533bc
void entry_00253374_0x253374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253374_0x253374");
#endif

    ctx->pc = 0x253374u;

    // 0x253374: 0x3c03477f  lui         $v1, 0x477F
    ctx->pc = 0x253374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18303 << 16));
    // 0x253378: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x253378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x25337c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25337cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253380: 0x0  nop
    ctx->pc = 0x253380u;
    // NOP
    // 0x253384: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x253384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x253388: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x253388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x25338c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25338cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253390: 0x0  nop
    ctx->pc = 0x253390u;
    // NOP
    // 0x253394: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x253394u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x253398: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x253398u;
    {
        const bool branch_taken_0x253398 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x253398) {
            ctx->pc = 0x2533BCu;
            return;
        }
    }
    ctx->pc = 0x2533A0u;
    // 0x2533a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2533a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2533a4: 0xae030128  sw          $v1, 0x128($s0)
    ctx->pc = 0x2533a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 3));
    // 0x2533a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2533a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2533ac: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x2533acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2533b0: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x2533b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x2533b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2533B4u;
    {
        const bool branch_taken_0x2533b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533b4) {
            ctx->pc = 0x2533CCu;
            return;
        }
    }
    ctx->pc = 0x2533BCu;
}
