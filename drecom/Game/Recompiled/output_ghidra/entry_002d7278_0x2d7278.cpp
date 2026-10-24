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

// Function: entry_002d7278
// Address: 0x2d7278 - 0x2d7300
void entry_002d7278_0x2d7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d7278_0x2d7278");
#endif

    switch (ctx->pc) {
        case 0x2d72c8u: goto label_2d72c8;
        default: break;
    }

    ctx->pc = 0x2d7278u;

    // 0x2d7278: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d727c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d7280: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d7280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d7284: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7288: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d7288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d728c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d728cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d7290: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d7290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d7294: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d7294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d7298: 0x24431344  addiu       $v1, $v0, 0x1344
    ctx->pc = 0x2d7298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d729c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d72a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d72a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d72a4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d72a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d72a8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d72a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d72ac: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d72acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d72b0: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d72b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d72b4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d72b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d72b8: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d72b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d72bc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d72bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72c0: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D72C0u;
    SET_GPR_U32(ctx, 31, 0x2D72C8u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D72C0u, 0x2D72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72C8u;
label_2d72c8:
    // 0x2d72c8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d72c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72cc: 0x904209e7  lbu         $v0, 0x9E7($v0)
    ctx->pc = 0x2d72ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2535)));
    // 0x2d72d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D72D0u;
    {
        const bool branch_taken_0x2d72d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72d0) {
            ctx->pc = 0x2D7300u;
            return;
        }
    }
    ctx->pc = 0x2D72D8u;
    // 0x2d72d8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d72d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72dc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d72e0: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d72e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d72e4: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d72e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d72e8: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x2d72ec: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d72ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d72f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d72f4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d72f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d72f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d72f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d72fc: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d72fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d7300u;
}
