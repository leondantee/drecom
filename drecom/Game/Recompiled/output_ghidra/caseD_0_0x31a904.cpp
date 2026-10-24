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

// Function: caseD_0
// Address: 0x31a904 - 0x31a9d8
void caseD_0_0x31a904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x31a904");
#endif

    switch (ctx->pc) {
        case 0x31a988u: goto label_31a988;
        case 0x31a9b0u: goto label_31a9b0;
        default: break;
    }

    ctx->pc = 0x31a904u;

    // 0x31a904: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x31a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a908: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a90c: 0xac4312b0  sw          $v1, 0x12B0($v0)
    ctx->pc = 0x31a90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4784), GPR_U32(ctx, 3));
    // 0x31a910: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31a914: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31a918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a91c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a920: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x31a920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x31a924: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31a928: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31a92c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a92cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a930: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a934: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x31a934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    // 0x31a938: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x31a938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x31a93c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x31a93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x31a940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31a940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a944: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a948: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x31a948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x31a94c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a950: 0xac40128c  sw          $zero, 0x128C($v0)
    ctx->pc = 0x31a950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 0));
    // 0x31a954: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a958: 0xac401290  sw          $zero, 0x1290($v0)
    ctx->pc = 0x31a958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4752), GPR_U32(ctx, 0));
    // 0x31a95c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31a95cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31a960: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a964: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x31a964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x31a968: 0xe440010c  swc1        $f0, 0x10C($v0)
    ctx->pc = 0x31a968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 268), bits); }
    // 0x31a96c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a970: 0x8c470130  lw          $a3, 0x130($v0)
    ctx->pc = 0x31a970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x31a974: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x31a974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x31a978: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31a978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a97c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31a980: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31A980u;
    SET_GPR_U32(ctx, 31, 0x31A988u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31A980u, 0x31A988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A988u;
label_31a988:
    // 0x31a988: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x31a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a98c: 0x8c421298  lw          $v0, 0x1298($v0)
    ctx->pc = 0x31a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4760)));
    // 0x31a990: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x31a990u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x31a994: 0x8e220130  lw          $v0, 0x130($s1)
    ctx->pc = 0x31a994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x31a998: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x31a998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31a99c: 0x24040057  addiu       $a0, $zero, 0x57
    ctx->pc = 0x31a99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x31a9a0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x31a9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x31a9a4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x31a9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x31a9a8: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x31A9A8u;
    SET_GPR_U32(ctx, 31, 0x31A9B0u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x31A9A8u, 0x31A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A9B0u;
label_31a9b0:
    // 0x31a9b0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a9b4: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x31a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x31a9b8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x31a9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x31a9bc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x31a9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x31a9c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31a9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31a9c4: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x31a9c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x31a9c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x31a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x31a9cc: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x31a9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x31a9d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31a9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31a9d4: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x31a9d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x31a9d8u;
}
