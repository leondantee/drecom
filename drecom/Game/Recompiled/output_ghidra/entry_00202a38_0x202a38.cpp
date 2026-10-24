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

// Function: entry_00202a38
// Address: 0x202a38 - 0x202b0c
void entry_00202a38_0x202a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202a38_0x202a38");
#endif

    ctx->pc = 0x202a38u;

    // 0x202a38: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x202a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x202a3c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a40: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a44: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202a44u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202a48: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a4c: 0x8c260ab8  lw          $a2, 0xAB8($at)
    ctx->pc = 0x202a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a50: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x202a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x202a54: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a58: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202a58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202a5c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x202a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x202a60: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x202a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x202a64: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x202a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x202a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x202a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x202a6c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x202a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x202a70: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x202a70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x202a74: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a78: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a7c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202a80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x202a80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202a84: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a88: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a8c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202a90: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202a94: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202a94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202a98: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202a9c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aa0: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202aa0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202aa4: 0xdfa600a8  ld          $a2, 0xA8($sp)
    ctx->pc = 0x202aa4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x202aa8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aac: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ab0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202ab4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x202ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x202ab8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ab8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202abc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202abcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202ac0: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202ac4: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ac8: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202acc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x202accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x202ad0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202ad4: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x202ad4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x202ad8: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x202ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x202adc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x202ADCu;
    {
        const bool branch_taken_0x202adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x202adc) {
            ctx->pc = 0x202B0Cu;
            return;
        }
    }
    ctx->pc = 0x202AE4u;
    // 0x202ae4: 0xdfa600b0  ld          $a2, 0xB0($sp)
    ctx->pc = 0x202ae4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x202ae8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202aec: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202af0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x202af0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x202af4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x202af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x202af8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x202af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x202afc: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x202afcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x202b00: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x202b00u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x202b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202B04u;
    {
        const bool branch_taken_0x202b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202b04) {
            ctx->pc = 0x202B28u;
            return;
        }
    }
    ctx->pc = 0x202B0Cu;
}
