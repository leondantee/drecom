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

// Function: entry_001e0af4
// Address: 0x1e0af4 - 0x1e0bd0
void entry_001e0af4_0x1e0af4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0af4_0x1e0af4");
#endif

    ctx->pc = 0x1e0af4u;

    // 0x1e0af4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0af8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e0afc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b00: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0b04: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e0b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b0cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0b10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e0b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e0b18: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e0b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b1c: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e0b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e0b20: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e0b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e0b24: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0b28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e0b28u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e0b2c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e0b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e0b30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e0b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b3c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0b40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0b40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0b44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b48: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0b4c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0b54: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0b58: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b5c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0b60: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b64: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0b68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b6c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0b70: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b74: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0b74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0b78: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b7c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0b80: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b84: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0b84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0b88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b8c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0b90: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0b94: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0b98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b9c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0ba0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0ba4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0ba8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0bac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0bb0: 0x94420008  lhu         $v0, 0x8($v0)
    ctx->pc = 0x1e0bb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1e0bb4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0BB4u;
    {
        const bool branch_taken_0x1e0bb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0bb4) {
            ctx->pc = 0x1E0BD0u;
            return;
        }
    }
    ctx->pc = 0x1E0BBCu;
    // 0x1e0bbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0bbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0bc0: 0x0  nop
    ctx->pc = 0x1e0bc0u;
    // NOP
    // 0x1e0bc4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0bc8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0BC8u;
    {
        const bool branch_taken_0x1e0bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0bc8) {
            ctx->pc = 0x1E0BECu;
            return;
        }
    }
    ctx->pc = 0x1E0BD0u;
}
