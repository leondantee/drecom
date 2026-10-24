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

// Function: entry_00285fec
// Address: 0x285fec - 0x286060
void entry_00285fec_0x285fec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00285fec_0x285fec");
#endif

    ctx->pc = 0x285fecu;

    // 0x285fec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x285ff0: 0x8c24011c  lw          $a0, 0x11C($at)
    ctx->pc = 0x285ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D011Cu));
    // 0x285ff4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x285ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x285ff8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x285ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x285ffc: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x285FFCu;
    {
        const bool branch_taken_0x285ffc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x285ffc) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286004u;
    // 0x286004: 0x9223660c  lbu         $v1, 0x660C($s1)
    ctx->pc = 0x286004u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26124)));
    // 0x286008: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x286008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28600c: 0x1460002f  bnez        $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x28600Cu;
    {
        const bool branch_taken_0x28600c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28600c) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286014u;
    // 0x286014: 0x9223660d  lbu         $v1, 0x660D($s1)
    ctx->pc = 0x286014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26125)));
    // 0x286018: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x28601c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x28601Cu;
    {
        const bool branch_taken_0x28601c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28601c) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286024u;
    // 0x286024: 0x82235dea  lb          $v1, 0x5DEA($s1)
    ctx->pc = 0x286024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24042)));
    // 0x286028: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x286028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x28602c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x28602cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x286030: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x286030u;
    {
        const bool branch_taken_0x286030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286030) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286038u;
    // 0x286038: 0x92236624  lbu         $v1, 0x6624($s1)
    ctx->pc = 0x286038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 26148)));
    // 0x28603c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x28603cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x286040: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x286040u;
    {
        const bool branch_taken_0x286040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x286040) {
            ctx->pc = 0x286060u;
            return;
        }
    }
    ctx->pc = 0x286048u;
    // 0x286048: 0x8e235dc8  lw          $v1, 0x5DC8($s1)
    ctx->pc = 0x286048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24008)));
    // 0x28604c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28604cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286050: 0xae235dc8  sw          $v1, 0x5DC8($s1)
    ctx->pc = 0x286050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24008), GPR_U32(ctx, 3));
    // 0x286054: 0xae205dcc  sw          $zero, 0x5DCC($s1)
    ctx->pc = 0x286054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24012), GPR_U32(ctx, 0));
    // 0x286058: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286058u;
    {
        const bool branch_taken_0x286058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286058) {
            ctx->pc = 0x2860CCu;
            return;
        }
    }
    ctx->pc = 0x286060u;
}
