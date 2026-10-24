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

// Function: entry_00315ef0
// Address: 0x315ef0 - 0x315f6c
void entry_00315ef0_0x315ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00315ef0_0x315ef0");
#endif

    ctx->pc = 0x315ef0u;

    // 0x315ef0: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315ef4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315ef8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315efc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f00: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x315f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f04: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x315f08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x315f0c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x315f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x315f10: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315f14: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315f18: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f20: 0xc46112cc  lwc1        $f1, 0x12CC($v1)
    ctx->pc = 0x315f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x315f24: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f28: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x315f28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x315f2c: 0x0  nop
    ctx->pc = 0x315f2cu;
    // NOP
    // 0x315f30: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x315F30u;
    {
        const bool branch_taken_0x315f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x315f30) {
            ctx->pc = 0x315F6Cu;
            return;
        }
    }
    ctx->pc = 0x315F38u;
    // 0x315f38: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x315f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x315f3c: 0x26030003  addiu       $v1, $s0, 0x3
    ctx->pc = 0x315f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
    // 0x315f40: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x315f40u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x315f44: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f4c: 0xe46012cc  swc1        $f0, 0x12CC($v1)
    ctx->pc = 0x315f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4812), bits); }
    // 0x315f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x315f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x315f54: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x315f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x315f58: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x315f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x315f5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x315f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x315f60: 0xac65128c  sw          $a1, 0x128C($v1)
    ctx->pc = 0x315f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 5));
    // 0x315f64: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x315F64u;
    {
        const bool branch_taken_0x315f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x315f64) {
            ctx->pc = 0x3161E0u;
            return;
        }
    }
    ctx->pc = 0x315F6Cu;
}
