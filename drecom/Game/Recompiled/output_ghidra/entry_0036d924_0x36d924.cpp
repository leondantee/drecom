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

// Function: entry_0036d924
// Address: 0x36d924 - 0x36d9b0
void entry_0036d924_0x36d924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d924_0x36d924");
#endif

    switch (ctx->pc) {
        case 0x36d9a8u: goto label_36d9a8;
        default: break;
    }

    ctx->pc = 0x36d924u;

    // 0x36d924: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d924u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d928: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x36d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x36d92c: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x36d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x36d930: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d934: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d934u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d938: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x36d938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36d93c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d940: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x36d940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36d944: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36d944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d948: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x36d948u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x36d94c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x36d94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d950: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36d950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36d954: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36d958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d95c: 0x0  nop
    ctx->pc = 0x36d95cu;
    // NOP
    // 0x36d960: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x36d960u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x36d964: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x36d964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x36d968: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x36d968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36d96c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x36d96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x36d970: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x36d970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x36d974: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d974u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d978: 0x0  nop
    ctx->pc = 0x36d978u;
    // NOP
    // 0x36d97c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x36d97cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x36d980: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x36d980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x36d984: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x36d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x36d988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36d988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36d98c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x36d98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x36d990: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x36d990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x36d994: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x36d994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x36d998: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x36d998u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x36d99c: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x36d99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x36d9a0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x36D9A0u;
    SET_GPR_U32(ctx, 31, 0x36D9A8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x36D9A0u, 0x36D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D9A8u;
label_36d9a8:
    // 0x36d9a8: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x36D9A8u;
    {
        const bool branch_taken_0x36d9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d9a8) {
            ctx->pc = 0x36DC18u;
            return;
        }
    }
    ctx->pc = 0x36D9B0u;
}
