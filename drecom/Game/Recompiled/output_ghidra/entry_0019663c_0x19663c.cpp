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

// Function: entry_0019663c
// Address: 0x19663c - 0x196664
void entry_0019663c_0x19663c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019663c_0x19663c");
#endif

    ctx->pc = 0x19663cu;

    // 0x19663c: 0x3c034cbe  lui         $v1, 0x4CBE
    ctx->pc = 0x19663cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19646 << 16));
    // 0x196640: 0x3464bc20  ori         $a0, $v1, 0xBC20
    ctx->pc = 0x196640u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x196644: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x196644u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196648: 0x0  nop
    ctx->pc = 0x196648u;
    // NOP
    // 0x19664c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x19664cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x196650: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x196650u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196654: 0xafb300ac  sw          $s3, 0xAC($sp)
    ctx->pc = 0x196654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 19));
    // 0x196658: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x196658u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19665c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x19665Cu;
    {
        const bool branch_taken_0x19665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19665c) {
            ctx->pc = 0x1966A0u;
            return;
        }
    }
    ctx->pc = 0x196664u;
}
