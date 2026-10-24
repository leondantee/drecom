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

// Function: Om8b_light_set
// Address: 0x340d60 - 0x340ed8
void Om8b_light_set_0x340d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_light_set_0x340d60");
#endif

    ctx->pc = 0x340d60u;

    // 0x340d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x340d64: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x340d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x340d68: 0xe7ac0018  swc1        $f12, 0x18($sp)
    ctx->pc = 0x340d68u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x340d6c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x340d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x340d70: 0x2463a250  addiu       $v1, $v1, -0x5DB0
    ctx->pc = 0x340d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943312));
    // 0x340d74: 0x27a40000  addiu       $a0, $sp, 0x0
    ctx->pc = 0x340d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x340d78: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x340d78u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3AA250u));
    // 0x340d7c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x340d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x340d80: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340d84: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340d88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x340d88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x340d8c: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x340D8Cu;
    {
        const bool branch_taken_0x340d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x340d8c) {
            ctx->pc = 0x340ECCu;
            goto label_340ecc;
        }
    }
    ctx->pc = 0x340D94u;
    // 0x340d94: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340d98: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340d9c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340da4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340da4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340da8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340dac: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340db0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340db4: 0xac60007c  sw          $zero, 0x7C($v1)
    ctx->pc = 0x340db4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 124), GPR_U32(ctx, 0));
    // 0x340db8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340dbc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340dc0: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340dc4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340dcc: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340dd0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340dd4: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340dd8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340ddc: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x340ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x340de0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340de4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340de8: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340dec: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340decu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340df0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340df4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340df4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340df8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340df8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340dfc: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340e00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e04: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x340e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x340e08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340e0c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340e10: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340e14: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340e14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340e18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e1c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340e20: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340e24: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340e28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e2c: 0xe4600078  swc1        $f0, 0x78($v1)
    ctx->pc = 0x340e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 120), bits); }
    // 0x340e30: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x340e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x340e34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x340e34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340e38: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340e3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x340e3cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x340e40: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340e44: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340e48: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340e4c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e50: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340e50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340e54: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340e58: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340e5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e60: 0xe4600080  swc1        $f0, 0x80($v1)
    ctx->pc = 0x340e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 128), bits); }
    // 0x340e64: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x340e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x340e68: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x340e68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340e6c: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340e70: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x340e70u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x340e74: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340e78: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340e7c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340e80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e84: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340e84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340e88: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340e8c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340e90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340e94: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x340e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x340e98: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x340e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x340e9c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x340e9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x340ea0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x340ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x340ea4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x340ea4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x340ea8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x340ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x340eac: 0x8c6412b0  lw          $a0, 0x12B0($v1)
    ctx->pc = 0x340eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4784)));
    // 0x340eb0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x340eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x340eb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340eb8: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x340eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x340ebc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x340ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x340ec0: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x340ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x340ec4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x340ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x340ec8: 0xe4600088  swc1        $f0, 0x88($v1)
    ctx->pc = 0x340ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 136), bits); }
label_340ecc:
    // 0x340ecc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x340eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x340ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x340ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340ED8u;
}
