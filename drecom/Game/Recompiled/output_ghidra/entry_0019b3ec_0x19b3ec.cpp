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

// Function: entry_0019b3ec
// Address: 0x19b3ec - 0x19b46c
void entry_0019b3ec_0x19b3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019b3ec_0x19b3ec");
#endif

    switch (ctx->pc) {
        case 0x19b40cu: goto label_19b40c;
        default: break;
    }

    ctx->pc = 0x19b3ecu;

    // 0x19b3ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3f0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b3f4: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19b3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19b3f8: 0x24066418  addiu       $a2, $zero, 0x6418
    ctx->pc = 0x19b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25624));
    // 0x19b3fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19b3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19b400: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19b400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19b404: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19B404u;
    SET_GPR_U32(ctx, 31, 0x19B40Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19B404u, 0x19B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B40Cu;
label_19b40c:
    // 0x19b40c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b410: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19b410u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b414: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b418: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19b418u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19b41c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x19b41cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b420: 0x8c831344  lw          $v1, 0x1344($a0)
    ctx->pc = 0x19b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4932)));
    // 0x19b424: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x19b424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x19b428: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x19b428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x19b42c: 0xac821344  sw          $v0, 0x1344($a0)
    ctx->pc = 0x19b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4932), GPR_U32(ctx, 2));
    // 0x19b430: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b434: 0x906210a8  lbu         $v0, 0x10A8($v1)
    ctx->pc = 0x19b434u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4264)));
    // 0x19b438: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x19b438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x19b43c: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x19b43cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    // 0x19b440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19b440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b444: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b448: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19b448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19b44c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19b44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x19b450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19b450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19b454: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x19b454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b458: 0xe4401280  swc1        $f0, 0x1280($v0)
    ctx->pc = 0x19b458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4736), bits); }
    // 0x19b45c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x19b45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x19b460: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19b460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19b464: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19b464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19b468: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19b468u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x19b46cu;
}
