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

// Function: entry_001ac890
// Address: 0x1ac890 - 0x1ac900
void entry_001ac890_0x1ac890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac890_0x1ac890");
#endif

    switch (ctx->pc) {
        case 0x1ac8c0u: goto label_1ac8c0;
        default: break;
    }

    ctx->pc = 0x1ac890u;

    // 0x1ac890: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1ac890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1ac894: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ac894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ac898: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ac898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ac89c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1AC89Cu;
    {
        const bool branch_taken_0x1ac89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ac89c) {
            ctx->pc = 0x1AC900u;
            return;
        }
    }
    ctx->pc = 0x1AC8A4u;
    // 0x1ac8a4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8a8: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x1ac8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8ac: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8b0: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1ac8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8b4: 0x26267d00  addiu       $a2, $s1, 0x7D00
    ctx->pc = 0x1ac8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32000));
    // 0x1ac8b8: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x1AC8B8u;
    SET_GPR_U32(ctx, 31, 0x1AC8C0u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x1AC8C0u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1AC8C0u) { return; }
    ctx->pc = 0x1AC8C0u;
label_1ac8c0:
    // 0x1ac8c0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x1ac8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x1ac8c4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ac8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ac8c8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1ac8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac8cc: 0x3c01005f  lui         $at, 0x5F
    ctx->pc = 0x1ac8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)95 << 16));
    // 0x1ac8d0: 0xc421eff4  lwc1        $f1, -0x100C($at)
    ctx->pc = 0x1ac8d0u;
    { uint32_t bits = FAST_READ32(0x5EEFF4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac8d4: 0x3c02453b  lui         $v0, 0x453B
    ctx->pc = 0x1ac8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17723 << 16));
    // 0x1ac8d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1ac8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1ac8dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ac8dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ac8e0: 0x0  nop
    ctx->pc = 0x1ac8e0u;
    // NOP
    // 0x1ac8e4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1ac8e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1ac8e8: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x1ac8e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ac8ec: 0x0  nop
    ctx->pc = 0x1ac8ecu;
    // NOP
    // 0x1ac8f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1AC8F0u;
    {
        const bool branch_taken_0x1ac8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ac8f0) {
            ctx->pc = 0x1AC900u;
            return;
        }
    }
    ctx->pc = 0x1AC8F8u;
    // 0x1ac8f8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x1ac8f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ac8fc: 0x0  nop
    ctx->pc = 0x1ac8fcu;
    // NOP
    ctx->pc = 0x1ac900u;
}
