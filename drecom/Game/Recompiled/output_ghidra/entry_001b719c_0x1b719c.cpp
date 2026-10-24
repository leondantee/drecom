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

// Function: entry_001b719c
// Address: 0x1b719c - 0x1b729c
void entry_001b719c_0x1b719c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b719c_0x1b719c");
#endif

    switch (ctx->pc) {
        case 0x1b71e8u: goto label_1b71e8;
        case 0x1b7200u: goto label_1b7200;
        case 0x1b7218u: goto label_1b7218;
        case 0x1b7230u: goto label_1b7230;
        case 0x1b7244u: goto label_1b7244;
        default: break;
    }

    ctx->pc = 0x1b719cu;

    // 0x1b719c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b71a0: 0x8c231a64  lw          $v1, 0x1A64($at)
    ctx->pc = 0x1b71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b71a4: 0x34640100  ori         $a0, $v1, 0x100
    ctx->pc = 0x1b71a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1b71a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b71a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b71ac: 0xac241a64  sw          $a0, 0x1A64($at)
    ctx->pc = 0x1b71acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A64u, _value); } while (0);
    // 0x1b71b0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b71b4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b71b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1b71b8: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x1b71b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
    // 0x1b71bc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1b71bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1b71c0: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x1b71c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
    // 0x1b71c4: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b71c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b71c8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b71c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b71cc: 0x3c043ec9  lui         $a0, 0x3EC9
    ctx->pc = 0x1b71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16073 << 16));
    // 0x1b71d0: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x1b71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x1b71d4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x1b71d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1b71d8: 0xc4ac1290  lwc1        $f12, 0x1290($a1)
    ctx->pc = 0x1b71d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b71dc: 0xc4cd00d4  lwc1        $f13, 0xD4($a2)
    ctx->pc = 0x1b71dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1b71e0: 0xc058f50  jal         func_163D40
    ctx->pc = 0x1B71E0u;
    SET_GPR_U32(ctx, 31, 0x1B71E8u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x1B71E0u, 0x1B71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B71E8u;
label_1b71e8:
    // 0x1b71e8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b71ec: 0xe46000d4  swc1        $f0, 0xD4($v1)
    ctx->pc = 0x1b71ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    // 0x1b71f0: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b71f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b71f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b71f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b71f8: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1B71F8u;
    SET_GPR_U32(ctx, 31, 0x1B7200u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1B71F8u, 0x1B7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7200u;
label_1b7200:
    // 0x1b7200: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7200u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7204: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7208: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b720c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x1b720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b7210: 0xc05cd58  jal         func_173560
    ctx->pc = 0x1B7210u;
    SET_GPR_U32(ctx, 31, 0x1B7218u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x1B7210u, 0x1B7218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7218u;
label_1b7218:
    // 0x1b7218: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7218u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b721c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b721cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b7220: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b7220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7224: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1b7224u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7228: 0xc057480  jal         func_15D200
    ctx->pc = 0x1B7228u;
    SET_GPR_U32(ctx, 31, 0x1B7230u);
    ctx->pc = 0x15D200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15D200u, 0x1B7228u, 0x1B7230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7230u;
label_1b7230:
    // 0x1b7230: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1b7230u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7234: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7238: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x1b7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x1b723c: 0xc057a80  jal         func_15EA00
    ctx->pc = 0x1B723Cu;
    SET_GPR_U32(ctx, 31, 0x1B7244u);
    ctx->pc = 0x15EA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EA00u, 0x1B723Cu, 0x1B7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7244u;
label_1b7244:
    // 0x1b7244: 0x3c034467  lui         $v1, 0x4467
    ctx->pc = 0x1b7244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17511 << 16));
    // 0x1b7248: 0x34644000  ori         $a0, $v1, 0x4000
    ctx->pc = 0x1b7248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1b724c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1b724cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b7250: 0x0  nop
    ctx->pc = 0x1b7250u;
    // NOP
    // 0x1b7254: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1b7254u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1b7258: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1b725c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b725cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7260: 0xc4811284  lwc1        $f1, 0x1284($a0)
    ctx->pc = 0x1b7260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b7264: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7268: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b726c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b726cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b7270: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1b7270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1b7274: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7278: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1b7278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b727c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b727cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7280: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b7280u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b7284: 0x0  nop
    ctx->pc = 0x1b7284u;
    // NOP
    // 0x1b7288: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7288u;
    {
        const bool branch_taken_0x1b7288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b7288) {
            ctx->pc = 0x1B729Cu;
            return;
        }
    }
    ctx->pc = 0x1B7290u;
    // 0x1b7290: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x1b7290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b7294: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1b7294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7298: 0xe4c00124  swc1        $f0, 0x124($a2)
    ctx->pc = 0x1b7298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 292), bits); }
    ctx->pc = 0x1b729cu;
}
