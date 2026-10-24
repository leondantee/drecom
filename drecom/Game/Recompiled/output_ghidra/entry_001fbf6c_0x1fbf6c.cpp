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

// Function: entry_001fbf6c
// Address: 0x1fbf6c - 0x1fbf9c
void entry_001fbf6c_0x1fbf6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fbf6c_0x1fbf6c");
#endif

    switch (ctx->pc) {
        case 0x1fbf7cu: goto label_1fbf7c;
        default: break;
    }

    ctx->pc = 0x1fbf6cu;

    // 0x1fbf6c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1fbf6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf70: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1fbf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1fbf74: 0xc040c68  jal         func_1031A0
    ctx->pc = 0x1FBF74u;
    SET_GPR_U32(ctx, 31, 0x1FBF7Cu);
    ctx->pc = 0x1031A0u;
    {
        ctx->pc = 0x1FBF7Cu;
        ps2_stubs::sceVu0DivVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1FBF7Cu) { return; }
    ctx->pc = 0x1FBF7Cu;
label_1fbf7c:
    // 0x1fbf7c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1fbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1fbf80: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1fbf80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fbf84: 0x0  nop
    ctx->pc = 0x1fbf84u;
    // NOP
    // 0x1fbf88: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1fbf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1fbf8c: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x1fbf8cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fbf90: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbf94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FBF94u;
    {
        const bool branch_taken_0x1fbf94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbf94) {
            ctx->pc = 0x1FC058u;
            return;
        }
    }
    ctx->pc = 0x1FBF9Cu;
}
