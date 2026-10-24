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

// Function: e2d_id14_type01
// Address: 0x2b11a0 - 0x2b128c
void e2d_id14_type01_0x2b11a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("e2d_id14_type01_0x2b11a0");
#endif

    switch (ctx->pc) {
        case 0x2b1234u: goto label_2b1234;
        default: break;
    }

    ctx->pc = 0x2b11a0u;

    // 0x2b11a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b11a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b11a4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2b11a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2b11a8: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x2b11a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
    // 0x2b11ac: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b11acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b11b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11b4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b11b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b11b8: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x2b11b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
    // 0x2b11bc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b11bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b11c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b11c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b11c8: 0xe4400094  swc1        $f0, 0x94($v0)
    ctx->pc = 0x2b11c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 148), bits); }
    // 0x2b11cc: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x2b11ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
    // 0x2b11d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b11d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b11d8: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x2b11d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
    // 0x2b11dc: 0x3c023f7a  lui         $v0, 0x3F7A
    ctx->pc = 0x2b11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16250 << 16));
    // 0x2b11e0: 0x3442e148  ori         $v0, $v0, 0xE148
    ctx->pc = 0x2b11e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57672);
    // 0x2b11e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b11e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b11e8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b11e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b11ec: 0xe44000ac  swc1        $f0, 0xAC($v0)
    ctx->pc = 0x2b11ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 172), bits); }
    // 0x2b11f0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2b11f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b11f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b11f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b11f8: 0xa043011d  sb          $v1, 0x11D($v0)
    ctx->pc = 0x2b11f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 3));
    // 0x2b11fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b11fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1204: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1208: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x2b1208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x2b120c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b120cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1210: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1214: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1218: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x2b1218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x2b121c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2b121cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2b1220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b1220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1224: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2b1224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1228: 0xe4400068  swc1        $f0, 0x68($v0)
    ctx->pc = 0x2b1228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x2b122c: 0xc067648  jal         func_19D920
    ctx->pc = 0x2B122Cu;
    SET_GPR_U32(ctx, 31, 0x2B1234u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2B122Cu, 0x2B1234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B1234u;
label_2b1234:
    // 0x2b1234: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x2b1234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
    // 0x2b1238: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2b1238u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b123c: 0x0  nop
    ctx->pc = 0x2b123cu;
    // NOP
    // 0x2b1240: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b1240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b1244: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x2b1248: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1248u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b124c: 0x0  nop
    ctx->pc = 0x2b124cu;
    // NOP
    // 0x2b1250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b1250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1254: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1258: 0xe4600104  swc1        $f0, 0x104($v1)
    ctx->pc = 0x2b1258u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x2b125c: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x2b125cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x2b1260: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x2b1260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x2b1264: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2b1264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b1268: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b126c: 0xe46000f4  swc1        $f0, 0xF4($v1)
    ctx->pc = 0x2b126cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 244), bits); }
    // 0x2b1270: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2b1274: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x2b1274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b1278: 0xa0640139  sb          $a0, 0x139($v1)
    ctx->pc = 0x2b1278u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 313), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b127c: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x2b127cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1280: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b1284: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B128Cu;
}
