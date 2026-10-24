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

// Function: entry_003272d0
// Address: 0x3272d0 - 0x327350
void entry_003272d0_0x3272d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003272d0_0x3272d0");
#endif

    switch (ctx->pc) {
        case 0x3272e8u: goto label_3272e8;
        case 0x327300u: goto label_327300;
        case 0x32731cu: goto label_32731c;
        default: break;
    }

    ctx->pc = 0x3272d0u;

    // 0x3272d0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272d8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272dc: 0xc44c0238  lwc1        $f12, 0x238($v0)
    ctx->pc = 0x3272dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3272e0: 0xc040c8c  jal         func_103230
    ctx->pc = 0x3272E0u;
    SET_GPR_U32(ctx, 31, 0x3272E8u);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x3272E8u;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3272E8u) { return; }
    ctx->pc = 0x3272E8u;
label_3272e8:
    // 0x3272e8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3272e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3272ec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3272ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272f0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3272f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3272f4: 0x244600e0  addiu       $a2, $v0, 0xE0
    ctx->pc = 0x3272f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 224));
    // 0x3272f8: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x3272F8u;
    SET_GPR_U32(ctx, 31, 0x327300u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x3272F8u, 0x327300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327300u;
label_327300:
    // 0x327300: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327304: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x327304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327308: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x327308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x32730c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x32730cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x327310: 0xc44c0224  lwc1        $f12, 0x224($v0)
    ctx->pc = 0x327310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x327314: 0xc040c8c  jal         func_103230
    ctx->pc = 0x327314u;
    SET_GPR_U32(ctx, 31, 0x32731Cu);
    ctx->pc = 0x103230u;
    {
        ctx->pc = 0x32731Cu;
        ps2_stubs::sceVu0ScaleVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x32731Cu) { return; }
    ctx->pc = 0x32731Cu;
label_32731c:
    // 0x32731c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x32731cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x327320: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x327320u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x327324: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327328: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x327328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
    // 0x32732c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x32732cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x327330: 0x946301a8  lhu         $v1, 0x1A8($v1)
    ctx->pc = 0x327330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 424)));
    // 0x327334: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x327334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x327338: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x327338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x32733c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x32733cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x327340: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x327340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x327344: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x327344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x327348: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x327348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x32734c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32734cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x327350u;
}
