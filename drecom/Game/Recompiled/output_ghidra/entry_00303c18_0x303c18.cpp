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

// Function: entry_00303c18
// Address: 0x303c18 - 0x303c84
void entry_00303c18_0x303c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303c18_0x303c18");
#endif

    ctx->pc = 0x303c18u;

    // 0x303c18: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c1c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x303c1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x303c20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x303c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x303c24: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x303c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x303c28: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x303C28u;
    {
        const bool branch_taken_0x303c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x303c28) {
            ctx->pc = 0x303D80u;
            return;
        }
    }
    ctx->pc = 0x303C30u;
    // 0x303c30: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x303c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x303c34: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x303c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x303c38: 0x24703200  addiu       $s0, $v1, 0x3200
    ctx->pc = 0x303c38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12800));
    // 0x303c3c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c40: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x303c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x303c44: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x303c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x303c48: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c4c: 0x0  nop
    ctx->pc = 0x303c4cu;
    // NOP
    // 0x303c50: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x303c50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x303c54: 0xe6000130  swc1        $f0, 0x130($s0)
    ctx->pc = 0x303c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 304), bits); }
    // 0x303c58: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x303c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x303c5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x303c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x303c60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x303c60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x303c64: 0x0  nop
    ctx->pc = 0x303c64u;
    // NOP
    // 0x303c68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x303c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x303c6c: 0x0  nop
    ctx->pc = 0x303c6cu;
    // NOP
    // 0x303c70: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x303C70u;
    {
        const bool branch_taken_0x303c70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x303c70) {
            ctx->pc = 0x303C84u;
            return;
        }
    }
    ctx->pc = 0x303C78u;
    // 0x303c78: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x303c78u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x303c7c: 0x3063fff7  andi        $v1, $v1, 0xFFF7
    ctx->pc = 0x303c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
    // 0x303c80: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x303c80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x303c84u;
}
