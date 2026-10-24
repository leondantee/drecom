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

// Function: entry_00125488
// Address: 0x125488 - 0x125540
void entry_00125488_0x125488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125488_0x125488");
#endif

    switch (ctx->pc) {
        case 0x12549cu: goto label_12549c;
        default: break;
    }

    ctx->pc = 0x125488u;

    // 0x125488: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12548c: 0x24440120  addiu       $a0, $v0, 0x120
    ctx->pc = 0x12548cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x125490: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x125490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125494: 0xc05cf7c  jal         func_173DF0
    ctx->pc = 0x125494u;
    SET_GPR_U32(ctx, 31, 0x12549Cu);
    ctx->pc = 0x173DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173DF0u, 0x125494u, 0x12549Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12549Cu;
label_12549c:
    // 0x12549c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x12549cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1254a0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254a4: 0xc4411284  lwc1        $f1, 0x1284($v0)
    ctx->pc = 0x1254a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254ac: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x1254acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1254b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1254b4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1254b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1254b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254bc: 0xc4411280  lwc1        $f1, 0x1280($v0)
    ctx->pc = 0x1254bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254c0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254c4: 0xc4401284  lwc1        $f0, 0x1284($v0)
    ctx->pc = 0x1254c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254c8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1254c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1254cc: 0xe4401284  swc1        $f0, 0x1284($v0)
    ctx->pc = 0x1254ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4740), bits); }
    // 0x1254d0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254d4: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x1254d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1254d8: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1254d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254dc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1254dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1254e0: 0x0  nop
    ctx->pc = 0x1254e0u;
    // NOP
    // 0x1254e4: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x1254E4u;
    {
        const bool branch_taken_0x1254e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1254e4) {
            ctx->pc = 0x125540u;
            return;
        }
    }
    ctx->pc = 0x1254ECu;
    // 0x1254ec: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x1254ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1254f0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1254f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254f4: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x1254f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x1254f8: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1254f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1254fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1254fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x125500: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x125500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x125504: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x125504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x125508: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x125508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12550c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x12550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125510: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x125510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x125514: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x125514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x125518: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12551c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x12551cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x125520: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125524: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x125524u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x125528: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12552c: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x12552cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x125530: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x125534: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x125534u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x125538: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x125538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12553c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x12553cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x125540u;
}
