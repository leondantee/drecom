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

// Function: entry_00203510
// Address: 0x203510 - 0x2035e4
void entry_00203510_0x203510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203510_0x203510");
#endif

    ctx->pc = 0x203510u;

    // 0x203510: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x203510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x203514: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203518: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x20351c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x20351cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203520: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203524: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203524u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203528: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x20352c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203530: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x203534: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x203534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x203538: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x203538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20353c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x20353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x203540: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x203540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x203544: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x203544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x203548: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x203548u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x20354c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20354cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203550: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203554: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x203554u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x203558: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20355c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20355cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203560: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203560u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203564: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203564u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x203568: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x20356c: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203570: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x203570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x203574: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203578: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x203578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x20357c: 0xdfa600a0  ld          $a2, 0xA0($sp)
    ctx->pc = 0x20357cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x203580: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203584: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203588: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x203588u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x20358c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x20358cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x203590: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x203590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x203594: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x203594u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x203598: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x203598u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x20359c: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x20359cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035a0: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035a4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2035a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2035a8: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035ac: 0xac230ab8  sw          $v1, 0xAB8($at)
    ctx->pc = 0x2035acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x600AB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x600AB8u, _value); } while (0);
    // 0x2035b0: 0x93838010  lbu         $v1, -0x7FF0($gp)
    ctx->pc = 0x2035b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294934544)));
    // 0x2035b4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x2035E4u;
            return;
        }
    }
    ctx->pc = 0x2035BCu;
    // 0x2035bc: 0xdfa600a8  ld          $a2, 0xA8($sp)
    ctx->pc = 0x2035bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2035c0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035c4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035c8: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2035c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2035cc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2035d0: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x2035d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x2035d4: 0x8c230ab8  lw          $v1, 0xAB8($at)
    ctx->pc = 0x2035d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x600AB8u));
    // 0x2035d8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x2035d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x2035dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x203600u;
            return;
        }
    }
    ctx->pc = 0x2035E4u;
}
