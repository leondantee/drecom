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

// Function: entry_001da1c8
// Address: 0x1da1c8 - 0x1da314
void entry_001da1c8_0x1da1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da1c8_0x1da1c8");
#endif

    ctx->pc = 0x1da1c8u;

    // 0x1da1c8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1da1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x1da1cc: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x1da1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1da1d0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1DA1D0u;
    {
        const bool branch_taken_0x1da1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da1d0) {
            ctx->pc = 0x1DA180u;
            return;
        }
    }
    ctx->pc = 0x1DA1D8u;
    // 0x1da1d8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da1dc: 0xac400100  sw          $zero, 0x100($v0)
    ctx->pc = 0x1da1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 0));
    // 0x1da1e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1da1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1da1e4: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x1da1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x1da1e8: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da1ec: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da1f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da1f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da1f8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da1f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da1fc: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da200: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x1da200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x1da204: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da208: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x1da208u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x1da20c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1da20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1da210: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x1da210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x1da214: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1da214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1da218: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da21c: 0xac20e080  sw          $zero, -0x1F80($at)
    ctx->pc = 0x1da21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E080u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E080u, _value); } while (0);
    // 0x1da220: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da224: 0xac20e084  sw          $zero, -0x1F7C($at)
    ctx->pc = 0x1da224u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61E084u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E084u, _value); } while (0);
    // 0x1da228: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da22c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da230: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da234: 0xac22e088  sw          $v0, -0x1F78($at)
    ctx->pc = 0x1da234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E088u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E088u, _value); } while (0);
    // 0x1da238: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da23c: 0x3442007c  ori         $v0, $v0, 0x7C
    ctx->pc = 0x1da23cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)124);
    // 0x1da240: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x1da240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x1da244: 0xac22e08c  sw          $v0, -0x1F74($at)
    ctx->pc = 0x1da244u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x61E08Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E08Cu, _value); } while (0);
    // 0x1da248: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da24c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da250: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da258: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da25c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da260: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1da260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1da264: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x1da264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x1da268: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1da268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da26c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da270: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1da274: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x1da274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x1da278: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da27c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da27cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da280: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da284: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da288: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1da288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1da28c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x1da28cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x1da290: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1da290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1da294: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1da294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1da298: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1da298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1da29c: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x1da29cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1da2a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1da2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1da2a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1da2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1da2a8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1da2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1da2ac: 0x3c026c00  lui         $v0, 0x6C00
    ctx->pc = 0x1da2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27648 << 16));
    // 0x1da2b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da2b4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1da2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x1da2b8: 0x12113c  dsll32      $v0, $s2, 4
    ctx->pc = 0x1da2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 4));
    // 0x1da2bc: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x1da2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x1da2c0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1da2c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da2c4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1da2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1da2c8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1da2c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1da2cc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1da2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1da2d0: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1da2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1da2d4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1da2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1da2d8: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x1da2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x1da2dc: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1da2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1da2e0: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x1da2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x1da2e4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1da2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1da2e8: 0x3c026c08  lui         $v0, 0x6C08
    ctx->pc = 0x1da2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27656 << 16));
    // 0x1da2ec: 0x34420084  ori         $v0, $v0, 0x84
    ctx->pc = 0x1da2ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)132);
    // 0x1da2f0: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x1da2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x1da2f4: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x1da2f4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1da2f8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x1da2f8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da2fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1da2fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da300: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1da300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1da304: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1da304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da308: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1da308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1da30c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA314u;
}
