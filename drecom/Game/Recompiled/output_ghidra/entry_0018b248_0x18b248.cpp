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

// Function: entry_0018b248
// Address: 0x18b248 - 0x18b28c
void entry_0018b248_0x18b248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018b248_0x18b248");
#endif

    ctx->pc = 0x18b248u;

    // 0x18b248: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b24c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b250: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b254: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x18b254u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x18b258: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b25c: 0x92020019  lbu         $v0, 0x19($s0)
    ctx->pc = 0x18b25cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 25)));
    // 0x18b260: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18b264: 0xa2020019  sb          $v0, 0x19($s0)
    ctx->pc = 0x18b264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x18b268: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x18b268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x18b26c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18b270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x18b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18b274: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x18b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x18b278: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18B278u;
    {
        const bool branch_taken_0x18b278 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x18b278) {
            ctx->pc = 0x18B28Cu;
            return;
        }
    }
    ctx->pc = 0x18B280u;
    // 0x18b280: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B280u;
    {
        const bool branch_taken_0x18b280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b280) {
            ctx->pc = 0x18B28Cu;
            return;
        }
    }
    ctx->pc = 0x18B288u;
    // 0x18b288: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x18b288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    ctx->pc = 0x18b28cu;
}
