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

// Function: entry_0035f940
// Address: 0x35f940 - 0x35f9c4
void entry_0035f940_0x35f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035f940_0x35f940");
#endif

    ctx->pc = 0x35f940u;

    // 0x35f940: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f944: 0x8c621290  lw          $v0, 0x1290($v1)
    ctx->pc = 0x35f944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x35f948: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f94c: 0xac621290  sw          $v0, 0x1290($v1)
    ctx->pc = 0x35f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4752), GPR_U32(ctx, 2));
    // 0x35f950: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f954: 0x8c62128c  lw          $v0, 0x128C($v1)
    ctx->pc = 0x35f954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4748)));
    // 0x35f958: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x35f958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x35f95c: 0xac62128c  sw          $v0, 0x128C($v1)
    ctx->pc = 0x35f95cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4748), GPR_U32(ctx, 2));
    // 0x35f960: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f964: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x35f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x35f968: 0x2c410003  sltiu       $at, $v0, 0x3
    ctx->pc = 0x35f968u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x35f96c: 0x10200015  beqz        $at, . + 4 + (0x15 << 2)
    ctx->pc = 0x35F96Cu;
    {
        const bool branch_taken_0x35f96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x35f96c) {
            ctx->pc = 0x35F9C4u;
            return;
        }
    }
    ctx->pc = 0x35F974u;
    // 0x35f974: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35f974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f978: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x35f978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x35f97c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x35f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x35f980: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x35f980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x35f984: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x35f984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x35f988: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f98c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f990: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35f990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35f994: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f998: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x35f998u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f99c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9a0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x35f9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f9a4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9a8: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x35f9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x35f9ac: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35f9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x35f9b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x35f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35f9b8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x35f9b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x35f9bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35f9c0: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x35f9c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x35f9c4u;
}
