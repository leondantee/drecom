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

// Function: Trans_Camera
// Address: 0x159ff0 - 0x15a154
void Trans_Camera_0x159ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Trans_Camera_0x159ff0");
#endif

    switch (ctx->pc) {
        case 0x15a020u: goto label_15a020;
        case 0x15a03cu: goto label_15a03c;
        case 0x15a0a4u: goto label_15a0a4;
        case 0x15a124u: goto label_15a124;
        case 0x15a144u: goto label_15a144;
        default: break;
    }

    ctx->pc = 0x159ff0u;

    // 0x159ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x159ff4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x159ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x159ff8: 0xafa40038  sw          $a0, 0x38($sp)
    ctx->pc = 0x159ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 4));
    // 0x159ffc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x159ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x15a000: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x15a000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x15a004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a008: 0x0  nop
    ctx->pc = 0x15a008u;
    // NOP
    // 0x15a00c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x15a00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x15a010: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a014: 0x24440110  addiu       $a0, $v0, 0x110
    ctx->pc = 0x15a014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x15a018: 0xc056348  jal         func_158D20
    ctx->pc = 0x15A018u;
    SET_GPR_U32(ctx, 31, 0x15A020u);
    ctx->pc = 0x158D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158D20u, 0x15A018u, 0x15A020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A020u;
label_15a020:
    // 0x15a020: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15a020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a024: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a028: 0x24640090  addiu       $a0, $v1, 0x90
    ctx->pc = 0x15a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x15a02c: 0x24450110  addiu       $a1, $v0, 0x110
    ctx->pc = 0x15a02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    // 0x15a030: 0xc7ac002c  lwc1        $f12, 0x2C($sp)
    ctx->pc = 0x15a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a034: 0xc040ce4  jal         func_103390
    ctx->pc = 0x15A034u;
    SET_GPR_U32(ctx, 31, 0x15A03Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x15A03Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A03Cu) { return; }
    ctx->pc = 0x15A03Cu;
label_15a03c:
    // 0x15a03c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a040: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a044: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x15a044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
    // 0x15a048: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a048u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a04c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a04cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a050: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x15a050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x15a054: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x15a054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a058: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a05c: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x15a05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x15a060: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15a064: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a064u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a068: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a06c: 0xe44000cc  swc1        $f0, 0xCC($v0)
    ctx->pc = 0x15a06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 204), bits); }
    // 0x15a070: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a074: 0xc44101b0  lwc1        $f1, 0x1B0($v0)
    ctx->pc = 0x15a074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a078: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x15a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a07c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x15a07cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x15a080: 0x3c0243b4  lui         $v0, 0x43B4
    ctx->pc = 0x15a080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17332 << 16));
    // 0x15a084: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x15a084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a088: 0x0  nop
    ctx->pc = 0x15a088u;
    // NOP
    // 0x15a08c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x15a08cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a090: 0x0  nop
    ctx->pc = 0x15a090u;
    // NOP
    // 0x15a094: 0x0  nop
    ctx->pc = 0x15a094u;
    // NOP
    // 0x15a098: 0x0  nop
    ctx->pc = 0x15a098u;
    // NOP
    // 0x15a09c: 0xc045500  jal         func_115400
    ctx->pc = 0x15A09Cu;
    SET_GPR_U32(ctx, 31, 0x15A0A4u);
    ctx->pc = 0x115400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115400u, 0x15A09Cu, 0x15A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A0A4u;
label_15a0a4:
    // 0x15a0a4: 0x3c024360  lui         $v0, 0x4360
    ctx->pc = 0x15a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17248 << 16));
    // 0x15a0a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15a0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a0ac: 0x0  nop
    ctx->pc = 0x15a0acu;
    // NOP
    // 0x15a0b0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x15a0b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x15a0b4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a0b8: 0xe44001b4  swc1        $f0, 0x1B4($v0)
    ctx->pc = 0x15a0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 436), bits); }
    // 0x15a0bc: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x15a0c0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x15a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x15a0c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x15a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x15a0c8: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x15a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x15a0cc: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x15a0ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x15a0d0: 0x3c024500  lui         $v0, 0x4500
    ctx->pc = 0x15a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17664 << 16));
    // 0x15a0d4: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x15a0d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x15a0d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x15a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x15a0dc: 0x44828800  mtc1        $v0, $f17
    ctx->pc = 0x15a0dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x15a0e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15a0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15a0e4: 0xc420fd70  lwc1        $f0, -0x290($at)
    ctx->pc = 0x15a0e4u;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a0e8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x15a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x15a0ec: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a0f0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15a0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a0f4: 0x3c023eee  lui         $v0, 0x3EEE
    ctx->pc = 0x15a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16110 << 16));
    // 0x15a0f8: 0x3442eeef  ori         $v0, $v0, 0xEEEF
    ctx->pc = 0x15a0f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61167);
    // 0x15a0fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x15a0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x15a100: 0x3c02477f  lui         $v0, 0x477F
    ctx->pc = 0x15a100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18303 << 16));
    // 0x15a104: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x15a104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
    // 0x15a108: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x15a108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x15a10c: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x15a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x15a110: 0x44829800  mtc1        $v0, $f19
    ctx->pc = 0x15a110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x15a114: 0x248400d0  addiu       $a0, $a0, 0xD0
    ctx->pc = 0x15a114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 208));
    // 0x15a118: 0xc46c01b4  lwc1        $f12, 0x1B4($v1)
    ctx->pc = 0x15a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x15a11c: 0xc040df6  jal         func_1037D8
    ctx->pc = 0x15A11Cu;
    SET_GPR_U32(ctx, 31, 0x15A124u);
    ctx->pc = 0x1037D8u;
    {
        ctx->pc = 0x15A124u;
        ps2_stubs::sceVu0ViewScreenMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A124u) { return; }
    ctx->pc = 0x15A124u;
label_15a124:
    // 0x15a124: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a128: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x15a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a12c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x15a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15a130: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x15a130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x15a134: 0x246500d0  addiu       $a1, $v1, 0xD0
    ctx->pc = 0x15a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 208));
    // 0x15a138: 0x24460090  addiu       $a2, $v0, 0x90
    ctx->pc = 0x15a138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x15a13c: 0xc040c00  jal         func_103000
    ctx->pc = 0x15A13Cu;
    SET_GPR_U32(ctx, 31, 0x15A144u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x15A144u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x15A144u) { return; }
    ctx->pc = 0x15A144u;
label_15a144:
    // 0x15a144: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x15a144u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a148: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x15a148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15a14c: 0x3e00008  jr          $ra
    ctx->pc = 0x15A14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A154u;
}
