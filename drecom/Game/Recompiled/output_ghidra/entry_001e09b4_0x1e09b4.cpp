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

// Function: entry_001e09b4
// Address: 0x1e09b4 - 0x1e0a90
void entry_001e09b4_0x1e09b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e09b4_0x1e09b4");
#endif

    ctx->pc = 0x1e09b4u;

    // 0x1e09b4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1e09b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1e09bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09c0: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e09c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e09c4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e09c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e09c8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1e09c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e09cc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e09ccu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e09d0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1e09d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1e09d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1e09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09dc: 0x3c024580  lui         $v0, 0x4580
    ctx->pc = 0x1e09dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17792 << 16));
    // 0x1e09e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e09e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e09e4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1e09e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e09e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e09e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e09ec: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1e09ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1e09f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e09f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e09f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e09f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e09f8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e09fc: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1e09fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1e0a00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a04: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a08: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1e0a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1e0a0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a14: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a1c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0a20: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a24: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0a28: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a2c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x1e0a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x1e0a30: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a34: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1e0a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1e0a38: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0a3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x1e0a3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e0a40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a44: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x1e0a44u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x1e0a48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a50: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a54: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1e0a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e0a58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a5c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1e0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1e0a60: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0a64: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e0a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e0a68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e0a6c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1e0a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e0a70: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1e0a70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e0a74: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0A74u;
    {
        const bool branch_taken_0x1e0a74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1e0a74) {
            ctx->pc = 0x1E0A90u;
            return;
        }
    }
    ctx->pc = 0x1E0A7Cu;
    // 0x1e0a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e0a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0a80: 0x0  nop
    ctx->pc = 0x1e0a80u;
    // NOP
    // 0x1e0a84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1e0a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1e0a88: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0A88u;
    {
        const bool branch_taken_0x1e0a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0a88) {
            ctx->pc = 0x1E0AACu;
            return;
        }
    }
    ctx->pc = 0x1E0A90u;
}
