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

// Function: entry_00273f9c
// Address: 0x273f9c - 0x274078
void entry_00273f9c_0x273f9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273f9c_0x273f9c");
#endif

    ctx->pc = 0x273f9cu;

    // 0x273f9c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x273f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273fa0: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x273fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x273fa4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273fa8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273fac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x273facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273fb0: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x273fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273fb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x273fb8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x273fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273fbc: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x273fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x273fc0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x273fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x273fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273fc8: 0x0  nop
    ctx->pc = 0x273fc8u;
    // NOP
    // 0x273fcc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x273fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x273fd0: 0x0  nop
    ctx->pc = 0x273fd0u;
    // NOP
    // 0x273fd4: 0x45010028  bc1t        . + 4 + (0x28 << 2)
    ctx->pc = 0x273FD4u;
    {
        const bool branch_taken_0x273fd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273fd4) {
            ctx->pc = 0x274078u;
            return;
        }
    }
    ctx->pc = 0x273FDCu;
    // 0x273fdc: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x273fe0: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x273fe4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x273fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x273fe8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x273fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x273fec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x273ff0: 0x8e3502d0  lw          $s5, 0x2D0($s1)
    ctx->pc = 0x273ff0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x273ff4: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x273ff8: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x273ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x273ffc: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x273ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x274000: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x274000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x274004: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x274004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274008: 0x0  nop
    ctx->pc = 0x274008u;
    // NOP
    // 0x27400c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27400cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x274010: 0x0  nop
    ctx->pc = 0x274010u;
    // NOP
    // 0x274014: 0x45000018  bc1f        . + 4 + (0x18 << 2)
    ctx->pc = 0x274014u;
    {
        const bool branch_taken_0x274014 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x274014) {
            ctx->pc = 0x274078u;
            return;
        }
    }
    ctx->pc = 0x27401Cu;
    // 0x27401c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x27401cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x274020: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x274020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274024: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x274024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274028: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x274028u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27402c: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x27402cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274030: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x274030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x274034: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x274034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x274038: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x274038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x27403c: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x27403cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x274040: 0x70b021  addu        $s6, $v1, $s0
    ctx->pc = 0x274040u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x274044: 0x16b100  sll         $s6, $s6, 4
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x274048: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x27404c: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x27404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x274050: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x274050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x274054: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x274054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x274058: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x274058u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x27405c: 0xb01821  addu        $v1, $a1, $s0
    ctx->pc = 0x27405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x274060: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x274064: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x274064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x274068: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27406c: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x27406cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x274070: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x274070u;
    {
        const bool branch_taken_0x274070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274070) {
            ctx->pc = 0x274128u;
            return;
        }
    }
    ctx->pc = 0x274078u;
}
