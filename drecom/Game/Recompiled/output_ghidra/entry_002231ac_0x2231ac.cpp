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

// Function: entry_002231ac
// Address: 0x2231ac - 0x223384
void entry_002231ac_0x2231ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002231ac_0x2231ac");
#endif

    switch (ctx->pc) {
        case 0x2231b4u: goto label_2231b4;
        case 0x2231e4u: goto label_2231e4;
        default: break;
    }

    ctx->pc = 0x2231acu;

    // 0x2231ac: 0xc067694  jal         func_19DA50
    ctx->pc = 0x2231ACu;
    SET_GPR_U32(ctx, 31, 0x2231B4u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x2231ACu, 0x2231B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231B4u;
label_2231b4:
    // 0x2231b4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2231b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2231b8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2231b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2231bc: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x2231bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x2231c0: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x2231c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
    // 0x2231c4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2231c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2231c8: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x2231c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2231cc: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x2231ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x2231d0: 0xa4c2005e  sh          $v0, 0x5E($a2)
    ctx->pc = 0x2231d0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 94), (uint16_t)GPR_U32(ctx, 2));
    // 0x2231d4: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x2231d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2231d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2231d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2231dc: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2231DCu;
    SET_GPR_U32(ctx, 31, 0x2231E4u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2231DCu, 0x2231E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2231E4u;
label_2231e4:
    // 0x2231e4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2231e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2231e8: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x2231e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x2231ec: 0x24850510  addiu       $a1, $a0, 0x510
    ctx->pc = 0x2231ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x2231f0: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x2231f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2231f4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2231f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2231f8: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x2231f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2231fc: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x2231fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x223200: 0x245e0750  addiu       $fp, $v0, 0x750
    ctx->pc = 0x223200u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 1872));
    // 0x223204: 0x73c08628  paddub      $s0, $fp, $zero
    ctx->pc = 0x223204u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x223208: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x223208u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x22320c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x22320cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223210: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x223210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x223214: 0x24450630  addiu       $a1, $v0, 0x630
    ctx->pc = 0x223214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1584));
    // 0x223218: 0x70a08628  paddub      $s0, $a1, $zero
    ctx->pc = 0x223218u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x22321c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x22321cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223220: 0x8fa70128  lw          $a3, 0x128($sp)
    ctx->pc = 0x223220u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223224: 0x8ce20058  lw          $v0, 0x58($a3)
    ctx->pc = 0x223224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 88)));
    // 0x223228: 0x244806c0  addiu       $t0, $v0, 0x6C0
    ctx->pc = 0x223228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x22322c: 0x71008628  paddub      $s0, $t0, $zero
    ctx->pc = 0x22322cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x223230: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x223230u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223234: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223238: 0x8c490058  lw          $t1, 0x58($v0)
    ctx->pc = 0x223238u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x22323c: 0x252905a0  addiu       $t1, $t1, 0x5A0
    ctx->pc = 0x22323cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1440));
    // 0x223240: 0x71208628  paddub      $s0, $t1, $zero
    ctx->pc = 0x223240u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x223244: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x223244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x223248: 0x8faa0128  lw          $t2, 0x128($sp)
    ctx->pc = 0x223248u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22324c: 0x8d4202d0  lw          $v0, 0x2D0($t2)
    ctx->pc = 0x22324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 720)));
    // 0x223250: 0x245439d0  addiu       $s4, $v0, 0x39D0
    ctx->pc = 0x223250u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 14800));
    // 0x223254: 0x96910140  lhu         $s1, 0x140($s4)
    ctx->pc = 0x223254u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x223258: 0x36230002  ori         $v1, $s1, 0x2
    ctx->pc = 0x223258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
    // 0x22325c: 0xa6830140  sh          $v1, 0x140($s4)
    ctx->pc = 0x22325cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 320), (uint16_t)GPR_U32(ctx, 3));
    // 0x223260: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x223260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223264: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x223264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x223268: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x223268u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
    // 0x22326c: 0x3c043f49  lui         $a0, 0x3F49
    ctx->pc = 0x22326cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16201 << 16));
    // 0x223270: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x223270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x223274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223278: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x223278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x22327c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x22327cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x223280: 0x3c033d56  lui         $v1, 0x3D56
    ctx->pc = 0x223280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15702 << 16));
    // 0x223284: 0x34637750  ori         $v1, $v1, 0x7750
    ctx->pc = 0x223284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30544);
    // 0x223288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x223288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22328c: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x22328cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x223290: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x223290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x223294: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x223294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
    // 0x223298: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x223298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
    // 0x22329c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22329cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2232a0: 0x26840150  addiu       $a0, $s4, 0x150
    ctx->pc = 0x2232a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x2232a4: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2232a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2232a8: 0x3c043d0e  lui         $a0, 0x3D0E
    ctx->pc = 0x2232a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15630 << 16));
    // 0x2232ac: 0x3483fa35  ori         $v1, $a0, 0xFA35
    ctx->pc = 0x2232acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64053);
    // 0x2232b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2232b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2232b4: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x2232b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x2232b8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2232b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2232bc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x2232bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x2232c0: 0x8c23dcf0  lw          $v1, -0x2310($at)
    ctx->pc = 0x2232c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3EDCF0u));
    // 0x2232c4: 0x24640130  addiu       $a0, $v1, 0x130
    ctx->pc = 0x2232c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
    // 0x2232c8: 0x26830150  addiu       $v1, $s4, 0x150
    ctx->pc = 0x2232c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 336));
    // 0x2232cc: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x2232ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x2232d0: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x2232d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2232d4: 0x8c7402d0  lw          $s4, 0x2D0($v1)
    ctx->pc = 0x2232d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2232d8: 0x96830140  lhu         $v1, 0x140($s4)
    ctx->pc = 0x2232d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 320)));
    // 0x2232dc: 0x34640002  ori         $a0, $v1, 0x2
    ctx->pc = 0x2232dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2232e0: 0xa6840140  sh          $a0, 0x140($s4)
    ctx->pc = 0x2232e0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 320), (uint16_t)GPR_U32(ctx, 4));
    // 0x2232e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2232e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2232e8: 0x0  nop
    ctx->pc = 0x2232e8u;
    // NOP
    // 0x2232ec: 0xe680011c  swc1        $f0, 0x11C($s4)
    ctx->pc = 0x2232ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 284), bits); }
    // 0x2232f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2232f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2232f4: 0x0  nop
    ctx->pc = 0x2232f4u;
    // NOP
    // 0x2232f8: 0xe6800120  swc1        $f0, 0x120($s4)
    ctx->pc = 0x2232f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 288), bits); }
    // 0x2232fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2232fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223300: 0x0  nop
    ctx->pc = 0x223300u;
    // NOP
    // 0x223304: 0xe6800124  swc1        $f0, 0x124($s4)
    ctx->pc = 0x223304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 292), bits); }
    // 0x223308: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x22330c: 0xc4600124  lwc1        $f0, 0x124($v1)
    ctx->pc = 0x22330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223310: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x223310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223314: 0x24431330  addiu       $v1, $v0, 0x1330
    ctx->pc = 0x223314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x223318: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x223318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x22331c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x22331cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223320: 0x90651308  lbu         $a1, 0x1308($v1)
    ctx->pc = 0x223320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x223324: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x223324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x223328: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x223328u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x22332c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22332Cu;
    {
        const bool branch_taken_0x22332c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22332c) {
            ctx->pc = 0x223384u;
            return;
        }
    }
    ctx->pc = 0x223334u;
    // 0x223334: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223338: 0x90631308  lbu         $v1, 0x1308($v1)
    ctx->pc = 0x223338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4872)));
    // 0x22333c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x22333cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x223340: 0x3066001f  andi        $a2, $v1, 0x1F
    ctx->pc = 0x223340u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x223344: 0x28c10005  slti        $at, $a2, 0x5
    ctx->pc = 0x223344u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x223348: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x223348u;
    {
        const bool branch_taken_0x223348 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x223348) {
            ctx->pc = 0x223384u;
            return;
        }
    }
    ctx->pc = 0x223350u;
    // 0x223350: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x223350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223354: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x223354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x223358: 0x34a30040  ori         $v1, $a1, 0x40
    ctx->pc = 0x223358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)64);
    // 0x22335c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x22335cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x223360: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223360u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223364: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x223364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223368: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x223368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x22336c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22336cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223370: 0x8fb50128  lw          $s5, 0x128($sp)
    ctx->pc = 0x223370u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223374: 0xe6a001a4  swc1        $f0, 0x1A4($s5)
    ctx->pc = 0x223374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 420), bits); }
    // 0x223378: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x223378u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22337c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x22337cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x223380: 0xe4a001a8  swc1        $f0, 0x1A8($a1)
    ctx->pc = 0x223380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 424), bits); }
    ctx->pc = 0x223384u;
}
