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

// Function: entry_002d6f58
// Address: 0x2d6f58 - 0x2d701c
void entry_002d6f58_0x2d6f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d6f58_0x2d6f58");
#endif

    switch (ctx->pc) {
        case 0x2d6fa8u: goto label_2d6fa8;
        default: break;
    }

    ctx->pc = 0x2d6f58u;

    // 0x2d6f58: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f5c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2d6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2d6f60: 0x245004b0  addiu       $s0, $v0, 0x4B0
    ctx->pc = 0x2d6f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1200));
    // 0x2d6f64: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f68: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x2d6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6f6c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2d6f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f70: 0xe6000120  swc1        $f0, 0x120($s0)
    ctx->pc = 0x2d6f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2d6f74: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2d6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6f78: 0x24431344  addiu       $v1, $v0, 0x1344
    ctx->pc = 0x2d6f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x2d6f7c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2d6f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2d6f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2d6f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d6f84: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2d6f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6f88: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2d6f88u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2d6f8c: 0xe6000124  swc1        $f0, 0x124($s0)
    ctx->pc = 0x2d6f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2d6f90: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2d6f90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d6f94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2d6f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2d6f98: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2d6f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6f9c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2d6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fa0: 0xc0b5fa0  jal         func_2D7E80
    ctx->pc = 0x2D6FA0u;
    SET_GPR_U32(ctx, 31, 0x2D6FA8u);
    ctx->pc = 0x2D7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E80u, 0x2D6FA0u, 0x2D6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6FA8u;
label_2d6fa8:
    // 0x2d6fa8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fac: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x2d6facu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x2d6fb0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D6FB0u;
    {
        const bool branch_taken_0x2d6fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6fb0) {
            ctx->pc = 0x2D701Cu;
            return;
        }
    }
    ctx->pc = 0x2D6FB8u;
    // 0x2d6fb8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fbc: 0x2463134c  addiu       $v1, $v1, 0x134C
    ctx->pc = 0x2d6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4940));
    // 0x2d6fc0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2d6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2d6fc4: 0x8ca41334  lw          $a0, 0x1334($a1)
    ctx->pc = 0x2d6fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4916)));
    // 0x2d6fc8: 0x2403ff05  addiu       $v1, $zero, -0xFB
    ctx->pc = 0x2d6fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967045));
    // 0x2d6fcc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x2d6fccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2d6fd0: 0xaca31334  sw          $v1, 0x1334($a1)
    ctx->pc = 0x2d6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4916), GPR_U32(ctx, 3));
    // 0x2d6fd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d6fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6fd8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2d6fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6fe0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2d6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6fe4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6fe8: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x2d6fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2d6fec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ff0: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x2d6ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6ff4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d6ff8: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x2d6ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2d6ffc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d6ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2d7000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2d7004: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2d7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d7008: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2d7008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2d700c: 0x247004b0  addiu       $s0, $v1, 0x4B0
    ctx->pc = 0x2d700cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1200));
    // 0x2d7010: 0x96030140  lhu         $v1, 0x140($s0)
    ctx->pc = 0x2d7010u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2d7014: 0x3063fffd  andi        $v1, $v1, 0xFFFD
    ctx->pc = 0x2d7014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65533);
    // 0x2d7018: 0xa6030140  sh          $v1, 0x140($s0)
    ctx->pc = 0x2d7018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d701cu;
}
