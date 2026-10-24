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

// Function: entry_001de1a4
// Address: 0x1de1a4 - 0x1de228
void entry_001de1a4_0x1de1a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001de1a4_0x1de1a4");
#endif

    switch (ctx->pc) {
        case 0x1de1f8u: goto label_1de1f8;
        default: break;
    }

    ctx->pc = 0x1de1a4u;

    // 0x1de1a4: 0x92e30000  lbu         $v1, 0x0($s7)
    ctx->pc = 0x1de1a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1de1a8: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1de1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1de1ac: 0x30c30002  andi        $v1, $a2, 0x2
    ctx->pc = 0x1de1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
    // 0x1de1b0: 0x10600171  beqz        $v1, . + 4 + (0x171 << 2)
    ctx->pc = 0x1DE1B0u;
    {
        const bool branch_taken_0x1de1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1b0) {
            ctx->pc = 0x1DE778u;
            return;
        }
    }
    ctx->pc = 0x1DE1B8u;
    // 0x1de1b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1de1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1de1bc: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1de1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1de1c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1de1c4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1de1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1de1c8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1de1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1de1cc: 0x7040ae28  paddub      $s5, $v0, $zero
    ctx->pc = 0x1de1ccu;
    SET_GPR_VEC(ctx, 21, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1de1d0: 0x8fbe0108  lw          $fp, 0x108($sp)
    ctx->pc = 0x1de1d0u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1de1d4: 0x161180  sll         $v0, $s6, 6
    ctx->pc = 0x1de1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 6));
    // 0x1de1d8: 0x8fde0130  lw          $fp, 0x130($fp)
    ctx->pc = 0x1de1d8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 304)));
    // 0x1de1dc: 0x3c21821  addu        $v1, $fp, $v0
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x1de1e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1de1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1de1e4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1de1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1de1e8: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1de1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1de1ec: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1de1f0: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1DE1F0u;
    SET_GPR_U32(ctx, 31, 0x1DE1F8u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1DE1F8u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1DE1F8u) { return; }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x1de1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de1fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de200: 0x0  nop
    ctx->pc = 0x1de200u;
    // NOP
    // 0x1de204: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de208: 0x0  nop
    ctx->pc = 0x1de208u;
    // NOP
    // 0x1de20c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1DE20Cu;
    {
        const bool branch_taken_0x1de20c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de20c) {
            ctx->pc = 0x1DE228u;
            return;
        }
    }
    ctx->pc = 0x1DE214u;
    // 0x1de214: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de214u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1de218: 0x0  nop
    ctx->pc = 0x1de218u;
    // NOP
    // 0x1de21c: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1de21cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x1de220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE220u;
    {
        const bool branch_taken_0x1de220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de220) {
            ctx->pc = 0x1DE230u;
            return;
        }
    }
    ctx->pc = 0x1DE228u;
}
