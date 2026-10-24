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

// Function: entry_002f939c
// Address: 0x2f939c - 0x2f94d0
void entry_002f939c_0x2f939c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f939c_0x2f939c");
#endif

    switch (ctx->pc) {
        case 0x2f94b0u: goto label_2f94b0;
        default: break;
    }

    ctx->pc = 0x2f939cu;

    // 0x2f939c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2f939cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2f93a0: 0xa202011c  sb          $v0, 0x11C($s0)
    ctx->pc = 0x2f93a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x2f93a4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f93a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f93a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f93ac: 0x0  nop
    ctx->pc = 0x2f93acu;
    // NOP
    // 0x2f93b0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f93b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f93b4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f93b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f93b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f93bc: 0x0  nop
    ctx->pc = 0x2f93bcu;
    // NOP
    // 0x2f93c0: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f93c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f93c4: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2f93c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2f93c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f93c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f93cc: 0x0  nop
    ctx->pc = 0x2f93ccu;
    // NOP
    // 0x2f93d0: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f93d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f93d4: 0x3c0242c4  lui         $v0, 0x42C4
    ctx->pc = 0x2f93d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17092 << 16));
    // 0x2f93d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f93d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f93dc: 0x0  nop
    ctx->pc = 0x2f93dcu;
    // NOP
    // 0x2f93e0: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f93e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f93e4: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f93e8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f93e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f93ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f93ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f93f0: 0x0  nop
    ctx->pc = 0x2f93f0u;
    // NOP
    // 0x2f93f4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2f93f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2f93f8: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f93fc: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9400: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9400u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9404: 0x0  nop
    ctx->pc = 0x2f9404u;
    // NOP
    // 0x2f9408: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2f9408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2f940c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f940cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9410: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9418: 0x0  nop
    ctx->pc = 0x2f9418u;
    // NOP
    // 0x2f941c: 0xe60000a8  swc1        $f0, 0xA8($s0)
    ctx->pc = 0x2f941cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
    // 0x2f9420: 0x3c023f63  lui         $v0, 0x3F63
    ctx->pc = 0x2f9420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16227 << 16));
    // 0x2f9424: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2f9424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2f9428: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9428u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f942c: 0x0  nop
    ctx->pc = 0x2f942cu;
    // NOP
    // 0x2f9430: 0xe60000ac  swc1        $f0, 0xAC($s0)
    ctx->pc = 0x2f9430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 172), bits); }
    // 0x2f9434: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2f9434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9438: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f9438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f943c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2f943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f9440: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2f9440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f9444: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2f9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2f9448: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2f9448u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2f944c: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9450: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9454: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9454u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9458: 0x0  nop
    ctx->pc = 0x2f9458u;
    // NOP
    // 0x2f945c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2f945cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2f9460: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f9460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9464: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f9468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f946c: 0x0  nop
    ctx->pc = 0x2f946cu;
    // NOP
    // 0x2f9470: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2f9470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2f9474: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2f9474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2f9478: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2f9478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2f947c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f947cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9480: 0x0  nop
    ctx->pc = 0x2f9480u;
    // NOP
    // 0x2f9484: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x2f9484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x2f9488: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2f9488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2f948c: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x2f948cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x2f9490: 0x3c02bc23  lui         $v0, 0xBC23
    ctx->pc = 0x2f9490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48163 << 16));
    // 0x2f9494: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2f9494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x2f9498: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f9498u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f949c: 0x0  nop
    ctx->pc = 0x2f949cu;
    // NOP
    // 0x2f94a0: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x2f94a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x2f94a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x2f94a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x2f94a8: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F94A8u;
    SET_GPR_U32(ctx, 31, 0x2F94B0u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F94A8u, 0x2F94B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F94B0u;
label_2f94b0:
    // 0x2f94b0: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x2f94b0u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2f94b4: 0x72201628  paddub      $v0, $s1, $zero
    ctx->pc = 0x2f94b4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x2f94b8: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x2f94b8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f94bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f94bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f94c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f94c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f94c4: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2f94c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f94c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F94C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F94C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F94D0u;
}
