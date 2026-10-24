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

// Function: entry_002f2d88
// Address: 0x2f2d88 - 0x2f2f68
void entry_002f2d88_0x2f2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f2d88_0x2f2d88");
#endif

    switch (ctx->pc) {
        case 0x2f2dd8u: goto label_2f2dd8;
        case 0x2f2e28u: goto label_2f2e28;
        case 0x2f2e78u: goto label_2f2e78;
        case 0x2f2ec8u: goto label_2f2ec8;
        case 0x2f2f18u: goto label_2f2f18;
        default: break;
    }

    ctx->pc = 0x2f2d88u;

    // 0x2f2d88: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f2d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f2d8c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2d8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2d90: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f2d94: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2d98: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2d9c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2da0: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2f2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2f2da4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2da4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2da8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2dac: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2dacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2db0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2db4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2db8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2db8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2dbc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2dbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2dc0: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2dc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2dc4: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2dc8: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2dc8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2dcc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2dccu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2dd0: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2DD0u;
    SET_GPR_U32(ctx, 31, 0x2F2DD8u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2DD0u, 0x2F2DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2DD8u;
label_2f2dd8:
    // 0x2f2dd8: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x2f2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
    // 0x2f2ddc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2de0: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2f2de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2f2de4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2de4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2de8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2f2de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2f2dec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2df0: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2df4: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2df8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2dfc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2e00: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2e04: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2e08: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2e0c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2e0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2e10: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2e10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2e14: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2e14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2e18: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2e18u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2e1c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2e1cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2e20: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2E20u;
    SET_GPR_U32(ctx, 31, 0x2F2E28u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2E20u, 0x2F2E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E28u;
label_2f2e28:
    // 0x2f2e28: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x2f2e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x2f2e2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2e30: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2f2e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2f2e34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2e38: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2e3c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2e40: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2e44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2e48: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f2e4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2e50: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2e54: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2e54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2e58: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2e5c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2e60: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2e60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2e64: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2e64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2e68: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2e68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2e6c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2e6cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2e70: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2E70u;
    SET_GPR_U32(ctx, 31, 0x2F2E78u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2E70u, 0x2F2E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2E78u;
label_2f2e78:
    // 0x2f2e78: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2e7c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2e80: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x2f2e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x2f2e84: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2e84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2e88: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2f2e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f2e8c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2e90: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2e94: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2e98: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x2f2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x2f2e9c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2ea0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2ea4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2ea8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2eac: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2eacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2eb0: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2eb4: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2eb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2eb8: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2ebc: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2ebcu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2ec0: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2EC0u;
    SET_GPR_U32(ctx, 31, 0x2F2EC8u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2EC0u, 0x2F2EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2EC8u;
label_2f2ec8:
    // 0x2f2ec8: 0x3c0243af  lui         $v0, 0x43AF
    ctx->pc = 0x2f2ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17327 << 16));
    // 0x2f2ecc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2eccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2ed0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2f2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f2ed4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2ed8: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2edc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2ee0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2ee4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2ee4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2ee8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2eec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2ef0: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2ef4: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2ef8: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2efc: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2f00: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2f00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2f04: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2f04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2f08: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2f08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2f0c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2f0cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2f10: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2F10u;
    SET_GPR_U32(ctx, 31, 0x2F2F18u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2F10u, 0x2F2F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F18u;
label_2f2f18:
    // 0x2f2f18: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2f1c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2f2f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f2f20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f2f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f2f24: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2f2f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2f2f28: 0x26020140  addiu       $v0, $s0, 0x140
    ctx->pc = 0x2f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x2f2f2c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x2f2f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x2f2f30: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x2f2f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x2f2f34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2f2f34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2f2f38: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2f2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2f2f3c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2f2f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2f2f40: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2f2f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2f2f44: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2f2f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f2f48: 0x8fa60088  lw          $a2, 0x88($sp)
    ctx->pc = 0x2f2f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f2f4c: 0x8fa70090  lw          $a3, 0x90($sp)
    ctx->pc = 0x2f2f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f2f50: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x2f2f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f2f54: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x2f2f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f2f58: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2f2f58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2f2f5c: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2f2f5cu;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f2f60: 0xc0bc9dc  jal         func_2F2770
    ctx->pc = 0x2F2F60u;
    SET_GPR_U32(ctx, 31, 0x2F2F68u);
    ctx->pc = 0x2F2770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2770u, 0x2F2F60u, 0x2F2F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2F68u;
}
