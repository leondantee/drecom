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

// Function: entry_00307930
// Address: 0x307930 - 0x3079a8
void entry_00307930_0x307930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00307930_0x307930");
#endif

    ctx->pc = 0x307930u;

    // 0x307930: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x307930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307934: 0x846310a6  lh          $v1, 0x10A6($v1)
    ctx->pc = 0x307934u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x307938: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x307938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30793c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x30793cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x307940: 0x28610384  slti        $at, $v1, 0x384
    ctx->pc = 0x307940u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)900) ? 1 : 0);
    // 0x307944: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x307944u;
    {
        const bool branch_taken_0x307944 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x307944) {
            ctx->pc = 0x3079A8u;
            return;
        }
    }
    ctx->pc = 0x30794Cu;
    // 0x30794c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x30794cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307950: 0x8c631338  lw          $v1, 0x1338($v1)
    ctx->pc = 0x307950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4920)));
    // 0x307954: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x307954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x307958: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x307958u;
    {
        const bool branch_taken_0x307958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x307958) {
            ctx->pc = 0x3079A8u;
            return;
        }
    }
    ctx->pc = 0x307960u;
    // 0x307960: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307964: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x307964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x307968: 0x24720480  addiu       $s2, $v1, 0x480
    ctx->pc = 0x307968u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
    // 0x30796c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x30796cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x307970: 0x8e540034  lw          $s4, 0x34($s2)
    ctx->pc = 0x307970u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x307974: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x307974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x307978: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x307978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x30797c: 0xae830024  sw          $v1, 0x24($s4)
    ctx->pc = 0x30797cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 3));
    // 0x307980: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x307980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307984: 0x8ca41338  lw          $a0, 0x1338($a1)
    ctx->pc = 0x307984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4920)));
    // 0x307988: 0x34830401  ori         $v1, $a0, 0x401
    ctx->pc = 0x307988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1025);
    // 0x30798c: 0xaca31338  sw          $v1, 0x1338($a1)
    ctx->pc = 0x30798cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4920), GPR_U32(ctx, 3));
    // 0x307990: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x307990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x307994: 0x8c831338  lw          $v1, 0x1338($a0)
    ctx->pc = 0x307994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4920)));
    // 0x307998: 0x34630020  ori         $v1, $v1, 0x20
    ctx->pc = 0x307998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32);
    // 0x30799c: 0xac831338  sw          $v1, 0x1338($a0)
    ctx->pc = 0x30799cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4920), GPR_U32(ctx, 3));
    // 0x3079a0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3079a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x3079a4: 0xa46011f2  sh          $zero, 0x11F2($v1)
    ctx->pc = 0x3079a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4594), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x3079a8u;
}
