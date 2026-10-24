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

// Function: camera_deviltrigger
// Address: 0x183c10 - 0x183d80
void camera_deviltrigger_0x183c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("camera_deviltrigger_0x183c10");
#endif

    switch (ctx->pc) {
        case 0x183c7cu: goto label_183c7c;
        case 0x183c94u: goto label_183c94;
        case 0x183ca8u: goto label_183ca8;
        case 0x183cc4u: goto label_183cc4;
        case 0x183cfcu: goto label_183cfc;
        case 0x183d18u: goto label_183d18;
        case 0x183d30u: goto label_183d30;
        case 0x183d64u: goto label_183d64;
        case 0x183d70u: goto label_183d70;
        default: break;
    }

    ctx->pc = 0x183c10u;

    // 0x183c10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x183c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x183c14: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x183c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x183c18: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x183c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
    // 0x183c1c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183c20: 0x24420150  addiu       $v0, $v0, 0x150
    ctx->pc = 0x183c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x183c24: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183c24u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183c28: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183c2c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183c30: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x183c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183c34: 0x3c02443b  lui         $v0, 0x443B
    ctx->pc = 0x183c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17467 << 16));
    // 0x183c38: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x183c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x183c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183c40: 0x0  nop
    ctx->pc = 0x183c40u;
    // NOP
    // 0x183c44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x183c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183c48: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x183c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x183c4c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183c50: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183c50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183c54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183c58: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x183c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x183c5c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183c60: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x183c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183c64: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183c68: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183c6c: 0x24450260  addiu       $a1, $v0, 0x260
    ctx->pc = 0x183c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
    // 0x183c70: 0x24660150  addiu       $a2, $v1, 0x150
    ctx->pc = 0x183c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x183c74: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183C74u;
    SET_GPR_U32(ctx, 31, 0x183C7Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183C74u, 0x183C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C7Cu;
label_183c7c:
    // 0x183c7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183c80: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x183c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183c84: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183c88: 0x24460230  addiu       $a2, $v0, 0x230
    ctx->pc = 0x183c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183c8c: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x183C8Cu;
    SET_GPR_U32(ctx, 31, 0x183C94u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x183C8Cu, 0x183C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183C94u;
label_183c94:
    // 0x183c94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x183c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x183c98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183c9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183ca0: 0xc040c86  jal         func_103218
    ctx->pc = 0x183CA0u;
    SET_GPR_U32(ctx, 31, 0x183CA8u);
    ctx->pc = 0x103218u;
    {
        ctx->pc = 0x183CA8u;
        ps2_stubs::sceVu0MulVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183CA8u) { return; }
    ctx->pc = 0x183CA8u;
label_183ca8:
    // 0x183ca8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x183ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x183cac: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x183cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183cb0: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x183cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x183cb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x183cb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x183cb8: 0x46001300  add.s       $f12, $f2, $f0
    ctx->pc = 0x183cb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x183cbc: 0xc045630  jal         func_1158C0
    ctx->pc = 0x183CBCu;
    SET_GPR_U32(ctx, 31, 0x183CC4u);
    ctx->pc = 0x1158C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C0u, 0x183CBCu, 0x183CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183CC4u;
label_183cc4:
    // 0x183cc4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x183cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x183cc8: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x183cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x183ccc: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183cd0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183cd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x183cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x183cd8: 0x0  nop
    ctx->pc = 0x183cd8u;
    // NOP
    // 0x183cdc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x183cdcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x183ce0: 0x0  nop
    ctx->pc = 0x183ce0u;
    // NOP
    // 0x183ce4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x183CE4u;
    {
        const bool branch_taken_0x183ce4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x183ce4) {
            ctx->pc = 0x183D30u;
            goto label_183d30;
        }
    }
    ctx->pc = 0x183CECu;
    // 0x183cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183cf0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183cf4: 0xc040c24  jal         func_103090
    ctx->pc = 0x183CF4u;
    SET_GPR_U32(ctx, 31, 0x183CFCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x183CFCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183CFCu) { return; }
    ctx->pc = 0x183CFCu;
label_183cfc:
    // 0x183cfc: 0x3c02440f  lui         $v0, 0x440F
    ctx->pc = 0x183cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17423 << 16));
    // 0x183d00: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x183d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x183d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x183d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x183d08: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x183d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183d0c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x183d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183d10: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x183D10u;
    SET_GPR_U32(ctx, 31, 0x183D18u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x183D18u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x183D18u) { return; }
    ctx->pc = 0x183D18u;
label_183d18:
    // 0x183d18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x183d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d1c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183d20: 0x24450230  addiu       $a1, $v0, 0x230
    ctx->pc = 0x183d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183d24: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x183d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x183d28: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x183D28u;
    SET_GPR_U32(ctx, 31, 0x183D30u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x183D28u, 0x183D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D30u;
label_183d30:
    // 0x183d30: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183d38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x183d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183d3c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x183d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x183d40: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183d40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x183d44: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x183d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x183d48: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x183d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183d4c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x183d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x183d50: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x183d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x183d54: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x183d54u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x480230u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x480230u, _value); } while (0);
    // 0x183d58: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183d5c: 0xc05f8f8  jal         func_17E3E0
    ctx->pc = 0x183D5Cu;
    SET_GPR_U32(ctx, 31, 0x183D64u);
    ctx->pc = 0x17E3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E3E0u, 0x183D5Cu, 0x183D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D64u;
label_183d64:
    // 0x183d64: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x183d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x183d68: 0xc05f910  jal         func_17E440
    ctx->pc = 0x183D68u;
    SET_GPR_U32(ctx, 31, 0x183D70u);
    ctx->pc = 0x17E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E440u, 0x183D68u, 0x183D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183D70u;
label_183d70:
    // 0x183d70: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x183d70u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183d74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x183d74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x183d78: 0x3e00008  jr          $ra
    ctx->pc = 0x183D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183D80u;
}
