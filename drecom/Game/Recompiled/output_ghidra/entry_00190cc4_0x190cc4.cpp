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

// Function: entry_00190cc4
// Address: 0x190cc4 - 0x190d48
void entry_00190cc4_0x190cc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190cc4_0x190cc4");
#endif

    switch (ctx->pc) {
        case 0x190cf0u: goto label_190cf0;
        default: break;
    }

    ctx->pc = 0x190cc4u;

    // 0x190cc4: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cc8: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x190cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190ccc: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cd0: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x190cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cd4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x190cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x190cd8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cdc: 0x248400a0  addiu       $a0, $a0, 0xA0
    ctx->pc = 0x190cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x190ce0: 0x246500a0  addiu       $a1, $v1, 0xA0
    ctx->pc = 0x190ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
    // 0x190ce4: 0xc44c0160  lwc1        $f12, 0x160($v0)
    ctx->pc = 0x190ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190ce8: 0xc040c60  jal         func_103180
    ctx->pc = 0x190CE8u;
    SET_GPR_U32(ctx, 31, 0x190CF0u);
    ctx->pc = 0x103180u;
    {
        ctx->pc = 0x190CF0u;
        ps2_stubs::sceVu0DivVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x190CF0u) { return; }
    ctx->pc = 0x190CF0u;
label_190cf0:
    // 0x190cf0: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190cf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190cf8: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x190cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190cfc: 0x3c0244c7  lui         $v0, 0x44C7
    ctx->pc = 0x190cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17607 << 16));
    // 0x190d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d04: 0x0  nop
    ctx->pc = 0x190d04u;
    // NOP
    // 0x190d08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x190d08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d0c: 0x0  nop
    ctx->pc = 0x190d0cu;
    // NOP
    // 0x190d10: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x190D10u;
    {
        const bool branch_taken_0x190d10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d10) {
            ctx->pc = 0x190D48u;
            return;
        }
    }
    ctx->pc = 0x190D18u;
    // 0x190d18: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x190d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x190d1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x190d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x190d20: 0xc44100a0  lwc1        $f1, 0xA0($v0)
    ctx->pc = 0x190d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x190d24: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x190d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
    // 0x190d28: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x190d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x190d2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x190d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190d30: 0x0  nop
    ctx->pc = 0x190d30u;
    // NOP
    // 0x190d34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x190d34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x190d38: 0x0  nop
    ctx->pc = 0x190d38u;
    // NOP
    // 0x190d3c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x190D3Cu;
    {
        const bool branch_taken_0x190d3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x190d3c) {
            ctx->pc = 0x190D54u;
            return;
        }
    }
    ctx->pc = 0x190D44u;
    // 0x190d44: 0x0  nop
    ctx->pc = 0x190d44u;
    // NOP
    ctx->pc = 0x190d48u;
}
