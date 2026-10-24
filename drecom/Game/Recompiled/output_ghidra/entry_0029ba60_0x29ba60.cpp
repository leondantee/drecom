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

// Function: entry_0029ba60
// Address: 0x29ba60 - 0x29bb5c
void entry_0029ba60_0x29ba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ba60_0x29ba60");
#endif

    switch (ctx->pc) {
        case 0x29bb08u: goto label_29bb08;
        case 0x29bb34u: goto label_29bb34;
        default: break;
    }

    ctx->pc = 0x29ba60u;

    // 0x29ba60: 0xde030008  ld          $v1, 0x8($s0)
    ctx->pc = 0x29ba60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ba64: 0xdfa20200  ld          $v0, 0x200($sp)
    ctx->pc = 0x29ba64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x29ba68: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x29ba68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ba6c: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x29ba6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x29ba70: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x29ba74: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x29ba74u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x29ba78: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x29ba7c: 0x2023023  subu        $a2, $s0, $v0
    ctx->pc = 0x29ba7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x29ba80: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x29ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29ba84: 0x6a942  srl         $s5, $a2, 5
    ctx->pc = 0x29ba84u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29ba88: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x29ba88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29ba8c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29ba90: 0x34668000  ori         $a2, $v1, 0x8000
    ctx->pc = 0x29ba90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x29ba94: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x29ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x29ba98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29ba9c: 0xc21825  or          $v1, $a2, $v0
    ctx->pc = 0x29ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29baa0: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x29baa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x29baa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29baa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29baa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x29baa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29baac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x29baacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x29bab0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bab4: 0x628825  or          $s1, $v1, $v0
    ctx->pc = 0x29bab4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29bab8: 0xfed10000  sd          $s1, 0x0($s6)
    ctx->pc = 0x29bab8u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 17));
    // 0x29babc: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x29bac0: 0xfec20008  sd          $v0, 0x8($s6)
    ctx->pc = 0x29bac0u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 8), GPR_U64(ctx, 2));
    // 0x29bac4: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x29bac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x29bac8: 0x2061023  subu        $v0, $s0, $a2
    ctx->pc = 0x29bac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x29bacc: 0x24140010  addiu       $s4, $zero, 0x10
    ctx->pc = 0x29baccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29bad0: 0x2a902  srl         $s5, $v0, 4
    ctx->pc = 0x29bad0u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x29bad4: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x29bad8: 0x2a2a025  or          $s4, $s5, $v0
    ctx->pc = 0x29bad8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x29badc: 0x14a03c  dsll32      $s4, $s4, 0
    ctx->pc = 0x29badcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29bae0: 0x14a03e  dsrl32      $s4, $s4, 0
    ctx->pc = 0x29bae0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x29bae4: 0xfe740000  sd          $s4, 0x0($s3)
    ctx->pc = 0x29bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 20));
    // 0x29bae8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x29bae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x29baec: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x29baecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x29baf0: 0x2a2f025  or          $fp, $s5, $v0
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x29baf4: 0xae7e000c  sw          $fp, 0xC($s3)
    ctx->pc = 0x29baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 30));
    // 0x29baf8: 0x8fa20218  lw          $v0, 0x218($sp)
    ctx->pc = 0x29baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bafc: 0xc44c01d4  lwc1        $f12, 0x1D4($v0)
    ctx->pc = 0x29bafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29bb00: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x29BB00u;
    SET_GPR_U32(ctx, 31, 0x29BB08u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x29BB00u, 0x29BB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB08u;
label_29bb08:
    // 0x29bb08: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x29bb08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x29bb0c: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb10: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29bb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x29bb14: 0x8c25013c  lw          $a1, 0x13C($at)
    ctx->pc = 0x29bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D013Cu));
    // 0x29bb18: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x29bb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x29bb1c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x29bb1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29bb20: 0x8c6501d0  lw          $a1, 0x1D0($v1)
    ctx->pc = 0x29bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29bb24: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x29bb24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x29bb28: 0x70e02e28  paddub      $a1, $a3, $zero
    ctx->pc = 0x29bb28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x29bb2c: 0xc06af20  jal         func_1ABC80
    ctx->pc = 0x29BB2Cu;
    SET_GPR_U32(ctx, 31, 0x29BB34u);
    ctx->pc = 0x1ABC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABC80u, 0x29BB2Cu, 0x29BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29BB34u;
label_29bb34:
    // 0x29bb34: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb38: 0x8c6301d0  lw          $v1, 0x1D0($v1)
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 464)));
    // 0x29bb3c: 0x203b823  subu        $s7, $s0, $v1
    ctx->pc = 0x29bb3cu;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x29bb40: 0x8fa30218  lw          $v1, 0x218($sp)
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x29bb44: 0xac7701cc  sw          $s7, 0x1CC($v1)
    ctx->pc = 0x29bb44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 460), GPR_U32(ctx, 23));
    // 0x29bb48: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29bb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29bb4c: 0x8c243580  lw          $a0, 0x3580($at)
    ctx->pc = 0x29bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x853580u));
    // 0x29bb50: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x29bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x29bb54: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29bb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
    // 0x29bb58: 0xac233580  sw          $v1, 0x3580($at)
    ctx->pc = 0x29bb58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x853580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x853580u, _value); } while (0);
    ctx->pc = 0x29bb5cu;
}
