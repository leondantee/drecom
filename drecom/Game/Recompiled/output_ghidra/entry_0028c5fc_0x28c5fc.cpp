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

// Function: entry_0028c5fc
// Address: 0x28c5fc - 0x28c62c
void entry_0028c5fc_0x28c5fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028c5fc_0x28c5fc");
#endif

    ctx->pc = 0x28c5fcu;

    // 0x28c5fc: 0x26125d70  addiu       $s2, $s0, 0x5D70
    ctx->pc = 0x28c5fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 23920));
    // 0x28c600: 0x3c024380  lui         $v0, 0x4380
    ctx->pc = 0x28c600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17280 << 16));
    // 0x28c604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c608: 0x0  nop
    ctx->pc = 0x28c608u;
    // NOP
    // 0x28c60c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x28c60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x28c610: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x28c614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28c614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28c618: 0x0  nop
    ctx->pc = 0x28c618u;
    // NOP
    // 0x28c61c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x28c61cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x28c620: 0x70009e28  paddub      $s3, $zero, $zero
    ctx->pc = 0x28c620u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28c624: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28C624u;
    {
        const bool branch_taken_0x28c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c624) {
            ctx->pc = 0x28C688u;
            return;
        }
    }
    ctx->pc = 0x28C62Cu;
}
