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

// Function: entry_00147584
// Address: 0x147584 - 0x147608
void entry_00147584_0x147584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147584_0x147584");
#endif

    ctx->pc = 0x147584u;

    // 0x147584: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147588: 0x908309e7  lbu         $v1, 0x9E7($a0)
    ctx->pc = 0x147588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2535)));
    // 0x14758c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x14758Cu;
    {
        const bool branch_taken_0x14758c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14758c) {
            ctx->pc = 0x147608u;
            return;
        }
    }
    ctx->pc = 0x147594u;
    // 0x147594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147598: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14759c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x14759cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1475a0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1475a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475a4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1475a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1475a8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475ac: 0xa0a00002  sb          $zero, 0x2($a1)
    ctx->pc = 0x1475acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1475b0: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1475b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475b4: 0xa0c00003  sb          $zero, 0x3($a2)
    ctx->pc = 0x1475b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1475b8: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x1475b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1475bc: 0x8fa80038  lw          $t0, 0x38($sp)
    ctx->pc = 0x1475bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475c0: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x1475c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x1475c4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475c8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1475c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1475cc: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1475ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1475d0: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1475d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1475d4: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1475d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x1475d8: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475dc: 0xc4a10124  lwc1        $f1, 0x124($a1)
    ctx->pc = 0x1475dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1475e0: 0x3c0344bb  lui         $v1, 0x44BB
    ctx->pc = 0x1475e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17595 << 16));
    // 0x1475e4: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x1475e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1475e8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1475e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1475ec: 0x0  nop
    ctx->pc = 0x1475ecu;
    // NOP
    // 0x1475f0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1475f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1475f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1475f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1475f8: 0xe4801b30  swc1        $f0, 0x1B30($a0)
    ctx->pc = 0x1475f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6960), bits); }
    // 0x1475fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1475fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147600: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x147600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147604: 0xa08310a8  sb          $v1, 0x10A8($a0)
    ctx->pc = 0x147604u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x147608u;
}
